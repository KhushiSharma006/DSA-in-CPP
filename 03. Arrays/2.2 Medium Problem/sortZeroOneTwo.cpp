/*
Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.
Input: nums = [1, 0, 2, 1, 0]
Output: [0, 0, 1, 1, 2]*/

#include<bits/stdc++.h>
using namespace std;

// Brute force: O(n)
/*void sortZeroOneTwo(vector<int>&arr){
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for(int i =0; i<arr.size(); i++){
        if(arr[i] == 0) cnt0++;
        else if( arr[i] == i) cnt1++;
        else cnt2++;
    }

    //
    for(int i =0; i < cnt0; i++){
        arr[i] = 0;
    }

    for(int i = cnt0; i<cnt0+cnt1; i++){
        arr[i] =1;
    }

    for(int i =cnt0+cnt1; i< arr.size(); i++){
        arr[i] = 2;
    }
}
    */
 
    

//Optimal Approach: Dutch National Flag algorithm.

void sortZeroOneTwo(vector<int>&arr){
    int low=0;
    int mid =0;
    int high = arr.size()-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
     }

}

int main(){
    vector<int> arr = {1,0,2,1,0};
    sortZeroOneTwo(arr);
    //array after sorting

    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;

    return 0;

}