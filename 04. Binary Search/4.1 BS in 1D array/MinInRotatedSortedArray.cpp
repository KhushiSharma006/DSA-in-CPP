/*Minimum in Rotated Sorted Array
PS:Given an integer array arr of size N, sorted in ascending order (with distinct values), the array is rotated at any index which is unknown. Find the minimum element in the array.
Pre-requisites: Search in Rotated Sorted Array I,  Search in Rotated Sorted Array II & Binary Search algorithm*/

#include<bits/stdc++.h>
using namespace std;

//In a rotated sorted array, the smallest element represents the point of rotation. It is the only element that is smaller than its previous element.
int MinInRotatedSortedArray(vector<int>&arr){
    int low = 0;
    int high = arr.size()-1;
     while(low<= high){
        int mid = low+(high-low)/2;

        // Minimum lies in left half (including mid)
        if(arr[low] > arr[mid]){
            high = mid;
        }
         // Minimum lies in right half
        else{
            low = mid+1;
        }
     }
     return arr[low];

}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2,3};
    cout<<"Minimun of the array is:"<< MinInRotatedSortedArray(arr);
    return 0;
}