/*Problem statement: You are given a sorted array of integers and a target, your task is to search for the target in the given array.
 Assume the given array does not contain any duplicate numbers.*/

 #include<bits/stdc++.h>
 using namespace std;

 int binarySearchByIteration(vector<int> &arr, int target){
    int low =0;
    int high =arr.size()-1;

    while(low <= high){
        int mid =(low + high)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target ){
            high =mid-1;
        }
        else{
            low = mid+1;

        }
    }
    return -1;
 }

 int binarySearchByRecursion(vector<int>&arr, int low, int high, int target){
    if(low >  high) return -1; // Base case: target not found

    int mid = (low+high)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]>target){
        return binarySearchByRecursion(arr, low, mid-1, target);
    }
    else{
        return binarySearchByRecursion(arr, mid+1, high, target);
    }
 }




 int main(){
    // sorted array
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 8;

    //int result = binarySearchByIteration(arr, target);
     int result = binarySearchByRecursion(arr, 0, arr.size()-1, target);

    if(result == -1){
        cout<<"Target not fount in the array";
    }
    else{
        cout<<"Target found at index: "<<result<<endl;
    }

    
 }
