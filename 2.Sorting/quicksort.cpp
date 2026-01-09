#include<bits/stdc++.h>
using namespace std;


int partition (vector<int>&arr, int low, int high ){
    int pivot = arr[low];
    int i =low;
    int j =high;

    while(i<j){
        while(arr[i]<= pivot && i< high){
            i++;
        }

        while(arr[j]> pivot && j> low){
            j--;
        }

        if(i<j){
            swap(arr[i], arr[j]);
        }

    }

    swap(arr[low], arr[j]);
    return j;


}


void quicksort(vector<int>&arr, int low, int high){
    if(low < high){
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex-1);
        quicksort(arr, pivotIndex+1, high);

    }       
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

    quicksort(arr,0, n-1);

    cout<<"The sorted array is: ";
    for(int it: arr){
        cout<<it<<" ";
    } 
    return 0;

}