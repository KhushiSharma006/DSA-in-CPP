//Problem Statement: You are given an array. The task is to reverse the array and print it.

/*Examples
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.
*/

#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach: store elements in reverse fashion in an array

int reverseArr(int arr[], int n){
    int i =0;
    while(i<n/2){
        swap(arr[i], arr[n-1-i]);
        i++;
    }
    return 0;
}



int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array:"<< endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    reverseArr(arr, n);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}