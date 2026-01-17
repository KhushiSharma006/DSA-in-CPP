/*Problem Statement: Given an array of length N, peak element is defined as the element greater than both of its neighbors. Formally, if arr[i] is the peak element, arr[i - 1] < arr[i] and arr[i + 1] < arr[i]. Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.

Examples
Input: arr[] = {1,2,3,4,5,6,7,8,5,1}
Output: 7 */




#include <bits/stdc++.h>
using namespace std;

// Brute force approach: linear search
// int peakElement(vector<int>&arr){
//     int n = arr.size();

//     for(int  i= 0; i<n; i++){
//         // Check left neighbor if exists
//         bool left = (i ==0 ) || (arr[i] >= arr[i-1]);
//          // Check right neighbor if exists       
//         bool right = (i == n-1) || (arr[i] >= arr[i+1]);
         
//          if(left && right) return i;
        
//     }
//     return -1;
// }

//optimal approach: binary search
int peakElement(vector<int>&arr){
    int n =arr.size();

    // arr has single element
    if(n ==1) return 0;
    
    //first element is the peak element
    if(arr[0]> arr[1]) return 0;

    // last element is the peak
    if(arr[n-1] > arr[n-2]) return n-1;

    int low =1;
    int high = arr.size()-2;

    while(low<= high){
        int mid = (low+high)/2;

        if(arr[mid-1]<arr[mid] && arr[mid]> arr[mid+1]){
            return mid;
        }

         // If mid element is greater than next
         if(arr[mid]> arr[mid+1]){
            //search in right half
            high = mid-1;
         }else{
            //search in left half
            low = mid+1;
         }


    }

    return -1;
}



int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,5,1};

    cout<<"Peak element of the array: "<<peakElement(arr); 
    
    return 0;
}