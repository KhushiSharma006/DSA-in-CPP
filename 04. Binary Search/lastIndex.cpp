//first and Last occurrence in a sorted array

/*Problem Statement: Given a sorted array of N integers, write a program to find the index of the first and last occurrence of the target key.
If the target is not found then return -1. Note: Consider 0 based indexing*/

/*
Input:
 N = 7, target = 13, array[] = {3, 4, 13, 13, 13, 20, 40}  
Output:
 4  
Explanation:
 The target value 13 appears for the first time at index number 2 in the array.  
 */

 /*APPROACH 1: first index = lowerBound() , last index = upperBound()-1  
               check for the first index if the target ==lowerBound || lowerBound != arr.size()
    APPROACH 2: by binary search
               for first occurence eliminate the right search space high =mid-1
               and for the last occurence eliminate the right half search space low =mid+1
 */

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


 int main(){
    vector<int> arr ={3, 4, 13, 13, 13, 20, 40};
    int target = 13;
    int n = arr.size();

    pair<int, int>ans =firstAndLastPosition(arr, target, n);

    cout<<"first and last occurance are:"<< ans.first <<", "<< ans.second ;

 }