/*Two Sum : Check if a pair with given sum exists in Array
PS : Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.*/

#include<bits/stdc++.h>
using namespace std;

// Brute force approach- O(n^2)
/*vector<int> twoSumIndices(vector<int>&arr, int target){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                return{i, j};
            }
        }
    }

    return {-1, -1};

}
*/



// Optimal Approach- O(n), as each lookup or insertion in the hash map takes O(1) on average

/*vector<int> twoSumIndices(vector<int> &arr, int target){
    unordered_map<int, int> mpp; // map store ele -> index
    int n =arr.size();

    for(int i =0; i<n; i++){
        int complement = target - arr[i];
        if( mpp.find(complement) != mpp.end()){
            return {mpp[complement], i};
        }
        // Store current element and index
        mpp[arr[i]] = i;
    }

    return {-1,-1};

}
*/



// Optimal Approach: 2 pointer approach in greeady way
// T.C. = O(nlog n) + n
// S.C. = O(1)

string twoSum(vector<int>&arr, int target){
    int left =0;
    int right = arr.size()-1;

    sort(arr.begin(), arr.end());

    while(left< right){
        int sum = arr[left] +arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum< target)
            left ++;
        
        else right--;
    }

    return "NO";

}


int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    // vector<int> result = twoSumIndices(arr, target);
    // cout<<"The indeces are: "<< result[0]<<" ,"<< result[1];
    
    string ans = twoSum(arr, target);
    cout<<" Are the element exist in the array? "<< ans;

    return 0;
}