/*Problem Statement: you're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1]. 
The floor of x is the largest element in the array which is smaller than or equal to x.  f<=x
The ceiling of x is the smallest element in the array greater than or equal to x,   c>=x
*/

#include<bits/stdc++.h>
using namespace std;

int findFloor(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] <= x) {
            ans = arr[mid];     // Potential floor
            low = mid + 1;      // Search right side
        } else {
            high = mid - 1;     // Search left side
        }
    }
    return ans;
}

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = arr[mid];     // Potential ceil
            high = mid - 1;     // Search left side
        } else {
            low = mid + 1;      // Search right side
        }
    }
    return ans;
}

int main() {
    int arr[] = {3,4,4,7,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    cout << "The floor is: " << findFloor(arr, n, x) << endl;
    cout << "The ceiling is: " << findCeil(arr, n, x) << endl;

    return 0;
}
