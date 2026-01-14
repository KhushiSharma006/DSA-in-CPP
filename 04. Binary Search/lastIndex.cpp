//Last occurrence in a sorted array

/*Problem Statement: Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key.
If the target is not found then return -1. Note: Consider 0 based indexing*/

/*
Input:
 N = 7, target = 13, array[] = {3, 4, 13, 13, 13, 20, 40}  
Output:
 4  
Explanation:
 The target value 13 appears for the first time at index number 2 in the array.  
 */

 #include<bits/stdc++.h>
 using namespace std;

 int lastOccurrence(vector<int> &arr, int target){
    int low =0;
    int high =arr.size() -1;
    int ans =-1;

    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            ans = mid;
            low =mid+1;
        }
        else if(arr[mid] > target){
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
 }

 int main(){
    vector<int> arr ={3, 4, 13, 13, 13, 20, 40};
    int target = 13;

    cout<<""<<lastOccurrence(arr, target);

 }