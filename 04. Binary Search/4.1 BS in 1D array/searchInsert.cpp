/*Problem Statement: You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.
Example: Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.*/

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int n, int x){
    int low =0; int high = n-1; 
    int ans = n; // Default to end if x is greater than all elements
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans =mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        } 
    }
    return ans;
}



int main(){
    //sorted array
    vector<int> arr = {1,3,4,6,10,18};
    int n =arr.size();
    int x = 9; // target value  

    cout<<"The index is: "<<searchInsert(arr, n, x)<<endl;


}