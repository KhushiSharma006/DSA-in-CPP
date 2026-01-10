#include<bits/stdc++.h>
using namespace std;

 /// Largest element of the array
int largestElement(vector<int> &arr, int n){
    int max = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
       
    }
     return max;

}

/// Second largest element of the array
int secondLargestElement(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
    
//     int max = arr[0];
//     int secondMax = INT_MIN;    
//     for(int i =1; i<n; i++){
//         if(arr[i]>max){
//             secondMax = max;
//             max = arr[i];
//         }
//         else if(arr[i]>secondMax && arr[i]!=max){
//             secondMax = arr[i];
//         }
       
//     }
//      return secondMax;
 }


// Check if an array is sorted or not
 bool isSorted(vector<int>&arr, int n){
    for(int i =1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
 }

 //Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. 
 //The relative order of the elements should be kept the same.

 int removeDuplicates(vector<int>&arr, int n){
    // set<int>s;
    // for(int i =0; i<n; i++){
    //     s.insert(arr[i]);
    // } 
    // return s.size();

    //optimal: 2 pointer approach- place the uniques elements at beginning
    int  i =0;
    for(int j =1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;

 }


int main(){
    vector <int>arr ={10, 5, 4 ,20, 15, 5};
    
    
    cout<< "The largest element of the array is:"<< largestElement(arr, arr.size()-1);

    cout<< "\nThe second largest element of the array is:"<< secondLargestElement(arr, arr.size()-1);

    cout<<"\n Array is sorted?:" << isSorted(arr, arr.size()-1);

    cout<<"\n The number of the unique elements are: "<< removeDuplicates(arr, arr.size());



    return 0;    
}