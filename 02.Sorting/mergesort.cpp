#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";

    for(int i = 0; i <n; i++){
        cin>>arr[i];
    }

}

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high){
    vector<int>temp;

    int i =low;
    int j = mid+1;

    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= high){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
        }
    }

void mergesort(vector<int>&arr, int low, int high){
    if(low >= high){
        return;
    }

    int mid = (low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";

    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }

    mergesort(arr,0, n-1);
    for(int it: arr){
        cout<<it<<" ";
    } 
    return 0;

}