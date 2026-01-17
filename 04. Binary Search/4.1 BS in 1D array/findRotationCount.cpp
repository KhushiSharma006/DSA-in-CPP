
/*Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values).
 Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated.
 */

 // find the min of the rotated array which is somehow the no of times array been rotated

 #include<bits/stdc++.h>
 using namespace std;

 int countRotations(vector<int>&arr){
    int low = 0;
    int high = arr.size()-1;

     while(low < high){
        int mid = low+(high-low)/2;

        // Minimum lies in left half (including mid)
        if( arr[mid]> arr[high]){
            low = mid+1;
        }
         // Minimum lies in right half
        else{
            high = mid;
        }
     }
     return low;

}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2,3};
   
    cout<<"no of rotations in the array are: "<< countRotations(arr);
    return 0;
}