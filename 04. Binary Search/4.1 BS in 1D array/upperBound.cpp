//The upper bound is the smallest index, ind, where arr[ind] > x.

/*Example :
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.*/

#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int n, int x){
    int low =0; int high = n-1;
    int ans = n; //default to n
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;

}

int main(){
    //sorted array
    vector<int> arr = {1,3,4,6,9,10,18};
    int n =arr.size();
    int x = 9; // target value

    cout<<"The upper bound is the index: "<<upperBound(arr, n, x);

}