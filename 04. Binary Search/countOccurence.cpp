/*Count Occurrences in Sorted Array
Problem Statement: You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.*/

// brute force approach: linear search
// optimal approach: find the first and last occurance index and calculate count = (last-first+1)

#include<bits/stdc++.h>
 using namespace std;

 int firstOccurance(vector<int> &arr, int target, int n){
    int low =0;
    int high =n-1;
    int first =-1;

    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid] == target){
            first = mid;
            high = mid-1; 
        }
        else if(arr[mid] > target) {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return first;
 }

 int lastOccurrence(vector<int> &arr, int target, int n){
    int low =0;
    int high =n-1;
    int last =-1;

    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            last = mid;
            low =mid+1;
        }
        else if(arr[mid] > target){
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return last;
 }

pair<int, int> firstAndLastPosition(vector<int>&arr, int target, int n){
    int first = firstOccurance(arr, target, n);

    //if target does not exist then return first, last = -1, for sake of saving time complexity (nlogn)
    if(first == -1) return {-1,-1};
     int last = lastOccurrence(arr, target, n);
     return {first,last};
}

int countOccurance(vector<int> &arr, int target, int n){
    pair<int, int>ans =firstAndLastPosition(arr, target, n);

    if(ans.first == -1) return 0;

    else{
        return (ans.second - ans.first +1);
    }
    

}


 int main(){
    vector<int> arr ={3, 4, 13, 13, 13, 13,20, 20, 40};
    int target = 13;
    int n = arr.size();

    cout<<"occurence of " << target<< " is: "<< countOccurance(arr, target, n);
    return 0; 

 }