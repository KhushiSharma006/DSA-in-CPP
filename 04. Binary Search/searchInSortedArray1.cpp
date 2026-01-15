/*Search Element in a Rotated Sorted Array

Problem Statement: Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1.

Examples
Input:nums = [4, 5, 6, 7, 0, 1, 2], k = 0
Output :4 */


/*Optimal Approach: Binary search- one half is always sorted 

1.Start by looking at the middle element of the array.
2.Check if this middle element is the target if yes, return its index immediately.
3.Now figure out which half of the array (left side or right side) is sorted.
4.If the left part is sorted:
  a.Check if the target number falls within the range of that sorted part.
  b.If it does, discard the right half and continue the search in the left part.
  c.If it doesn’t, discard the left half and search in the right side.
5.If the right part is sorted:
 a.Do the same check if the target is in that sorted part.
 b.If yes, discard the left side and search in the right.
 c.If not, discard the right and continue with the left.
6.Repeat this process of eliminating half the array until the target is found or the search space is empty.
*/

#include<bits/stdc++.h>
using namespace std;

int searchInARotatedSortedArrayI(vector<int>&arr, int target){
    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high){
        int mid = low+ (high-low)/2;
        if(arr[mid] == target){
            return mid;
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
    return -1;


}

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target =0;
    cout<<target<<" is found at index: "<<searchInARotatedSortedArrayI(arr ,target);

}