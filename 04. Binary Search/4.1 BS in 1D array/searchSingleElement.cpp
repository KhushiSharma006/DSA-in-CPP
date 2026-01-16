/*Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.

eg: Input : arr[] = {1,1,2,2,3,3,4,5,5,6,6}
   Output: 4*/

 /*Approach:
 1. linear search
 2. by xor operation
 3. by binary search: every pair starts at even index and ends at odd index when the array is still balanced 
                  (i.e., before the unique element is encountered).   
*/

#include<bits/stdc++.h>
using namespace std;

int findSingleNum(vector<int>&arr){
    int n =arr.size();
    
    if(n ==1) return arr[0]; // edge case if arr have single element

    if(arr[0] != arr[1]) return arr[0]; // Edge case: first element is the unique one

    if(arr[n-1] != arr[n-2]) return arr[n-1];  // Edge case:last element is the unique one

    int low =1;
    int high = n-2;

    while(low<=high){
        int mid = (low +high)/2;

        // mid element is the unique one
        if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
            return arr[mid];
        }

        // If mid is in the left half (pairing is valid)
        if(mid%2 == 0 &&  arr[mid] == arr[mid+1] || mid%2 == 1 && arr[mid] == arr[mid-1]){
                  // Move to the right half
                    low = mid + 1;
        }
        
        // If mid is in the right half (pairing broken earlier)
        else{
            high = mid -1;
        }
    }

    return -1;

}

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};

    cout<<"The single number is: "<< findSingleNum(arr);

    return 0;
}