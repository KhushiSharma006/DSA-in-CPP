//The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.

/*Example: Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 1
Explanation: Index 1 is the smallest index such that arr[1] >= x. */

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int x){
    int low =0; int high = n-1;
    int ans = n; //default to n (if not found)

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x ){
            ans =mid;
            high = mid-1;
        }
        else{
            low =mid+1;
        }
    }
    return ans;
}


int main(){
    //sorted array
    vector<int> arr = {1,3,4,6,10,18};
    int n =arr.size();
    int x = 9; // target value

    cout<<"The lower bound is the index: "<<lowerBound(arr, n, x);
} 