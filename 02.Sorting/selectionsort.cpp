// select the min and swap it by its right index

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
            cin>>arr[i];
    }

    for(int i =0; i<n; i++){
        int min= i;
        for(int j =i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        swap(arr[min], arr[i]);
    
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}