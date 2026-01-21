/*Find the Majority Element that occurs more than N/2 times

PS: Given an integer array nums of size n, return the majority element of the array.
The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.*/

#include<bits/stdc++.h>
using namespace std;


//Using HashMap: T.C. = O(nlog n)+ O(n), S.C.= O(n) (if array contains all the unique element)
/*
int majorityElement(vector<int>&arr){
    int n = arr.size();

    unordered_map<int, int> mpp;

    for(int i =0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
    return -1;

}*/



// Using Moore's Voting Algorithm: T.C.= O(n)

int majorityElement(vector<int>&arr){
    int n = arr.size();
    int cnt = 0;
    int ele;

    //Apply the algo
    for(int i = 0 ;i<n; i++){
        if(cnt == 0){
            cnt = 1;
            ele = arr[i];
        }
        else if(ele == arr[i]){
            cnt++;
        }else{
            cnt--;
        }
    }

    //Checking if the stored element is the majority element

    int cnt1= 0;
    for(int i =0; i<n; i++){
        if(arr[i] == ele){
            cnt1++;
        }
    }

    if(cnt1 > (n/2)){
        return ele;
    }

    return -1;

}


int main(){
    vector<int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    cout<<"The majority element is:" <<majorityElement(arr);

    return 0;
}