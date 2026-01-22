/*Kadane's Algorithm : Maximum Subarray Sum in an Array

Problem Statement: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
A subarray is a contiguous non-empty sequence of elements within an array.

Input: nums = [2, 3, 5, -2, 7, -4]  
Output:15  
Explanation:The subarray from index 0 to index 4 has the largest sum = 15, which is the maximum sum of any contiguous subarray.*/

#include<bits/stdc++.h>
using namespace std;

// Brute force approach:
/*int maxSubArray(vector<int>&arr){
    int n = arr.size();

    int maxEle  = INT_MIN;

    for(int i =0; i<n; i++){
        for(int j =i; j<n; j++){
            int sum =0;
            for(int k =i; k<=j; k++){
                sum+=arr[k];
            }
            maxEle = max(sum, maxEle);
        }
    }
    return maxEle;
}*/

// Better appraoch: O(n^2)
/*int maxSubArray(vector<int>&arr){
    int n = arr.size();

    int maxEle  = INT_MIN;

    for(int i =0; i<n; i++){
        int sum =0;
        for(int j =i; j<n; j++){
            sum+=arr[j];
        
            maxEle = max(sum, maxEle);
        }
    }
    return maxEle;
}*/



// Optimal Kadane's Theorem: O(n)
int maxSubArray(vector<int>&arr){
    long long max = LONG_MIN; // max sum
    long long sum =0; //current sum of the subarray

    for(int i =0; i<arr.size(); i++){
        sum += arr[i];

        if(sum< 0){
            sum =0;
        }

        if(sum>max){
            max =sum;
        }
    }
    return max;
}

int main(){
    vector<int>arr = {2, 3, 5, -2, 7, -4};

    cout<<"Maximum subarray is:"<< maxSubArray(arr);

    return 0;
}