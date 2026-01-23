/*Rearrange Array Elements by Sign
Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. 
Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Input: arr[] = {1,2,-3,-1,-2,3}, N = 6
Output:1 -3 2 -1 3 -2
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArrayElementBySign( vector<int> &arr){

    int n = arr.size();
    vector<int> ans (n,0); // array of size n initialized by value 0
    int posIdx = 0; 
    int negIdx = 1;

    for(int i =0; i<n;i++){
        if(arr[i]>=0){
            ans[posIdx] = arr[i];
            posIdx +=2;
        }
        else{
            ans[negIdx] = arr[i];
            negIdx += 2;
        }
    }

    return ans;

}

int main(){
    vector<int> arr = {1,2,-3,-1,-2,3};

    vector<int> result = rearrangeArrayElementBySign(arr);

    cout<<"Array after rearrangment by sign is: ";

    for(int n : result){
        cout<<n<<", ";
    }

    return 0;


}