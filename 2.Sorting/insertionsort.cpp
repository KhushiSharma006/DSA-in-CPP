// pick up an element and place it to its correct place by adjacent swapping

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    for(int i= 1; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}