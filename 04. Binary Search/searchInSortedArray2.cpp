/*Search Element in Rotated Sorted Array II

Problem Statement: Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False.

Examples
Example 1:
Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Result: True
Explanation: The element 3 is present in the array. So, the answer is True.*/


#include<bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>&arr, int target){
    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high){
        int mid = low+ (high-low)/2;
        if(arr[mid] == target){
            return true;
        }

        // // Edge case: all three are equal, we cannot determine which side is sorted, in this case just trim the search space
        if(arr[low] == arr[mid] == arr[high]){
            low++;
            high++;
            continue;
        }
        //if left half is sorted
        if(arr[low]<=arr[mid]){
             // If target lies in the sorted left half, search there
             if(arr[low]<=target && target<arr[mid]){
                high =mid-1;
             }
             //else search in right half
             else{
                low= mid+1;
             }

        }
        //right half is sorted
        else{
            // If target lies in the sorted right half, search there
            if(arr[mid]< target && target<= arr[high]){
                low =mid+1;
            }
            // Else search in the left half
            else{
                high = mid-1;

            }
        }

    }
    //if element f=not found
    return false;


}

int main(){
    vector<int> arr = {3, 5, 6, 3, 0, 1, 3};
    int target =0;

    bool ans = searchInARotatedSortedArrayII(arr ,target);
    if(ans) cout<< "Target is present in the array."<<endl;
    else cout<<"Target is not present in the array."<<endl;

    return 0;

}