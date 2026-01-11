/*
05.Left Rotate an array by one place
06.Left rotate an array by D places
07.Move Zeros to end
08.Reverse an array
09.Linear Search
10.Find the Union
*/

#include <bits/stdc++.h>
using namespace std;

// 05 Left rotate an array by one
void leftRotate(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

// 08.Reverse an array
void reverseArr(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// 06.Left rotate an array by D places

void leftRotateByD(vector<int> &arr, int n, int d)
{

    // Normalize d
    // d = d % n;

    reverseArr(arr, 0, d - 1);
    reverseArr(arr, d, n - 1);
    reverseArr(arr, 0, n - 1);
}

// Right rotate an array by D place
void rightRotateByD(vector<int> &arr, int n, int d)
{
    // Noramalize d
    d = d % n;

    reverseArr(arr, 0, n - d - 1);
    reverseArr(arr, n - d, n - 1);
    reverseArr(arr, 0, n - 1);
}

/// 07.Move Zeros to end
void moveZerosToEnd(vector<int> &arr, int n)
{
    int i = -1;
    // find the 1st zero
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] == 0)
        {
            i = j;
            break;
        }
    }
    // if no 0 found
    if (i == -1)
        return;

    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

// 09.Linear Search
int linearSearch(vector<int> &arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

// 10.Find the Union
vector<int> findUnion(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
   
    vector<int> Union;

    int i = 0, j = 0;

    // Loop until either pointer reaches the end
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++; 
        }
        
        else if (arr2[j] < arr1[i])
        {
            
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
        else
        { 
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
            j++; 
        }
    }

    // Append remaining elements from arr1
    while (i < n)
    {
        if (Union.empty() || Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }

    // Append remaining elements from arr2
    while (j < m)
    {
        if (Union.empty() || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }

    // Return the final union vector
    return Union;
}

int main()
{
    vector<int> arr = {1, 0, 2, 0, 0, 3, 4, 5};
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 5, 6};

    leftRotate(arr, arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    leftRotateByD(arr, arr.size(), 2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    rightRotateByD(arr, arr.size(), 2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    moveZerosToEnd(arr, arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Target is foud at index: " << linearSearch(arr, arr.size(), 5) << endl;

    

    vector<int> Union =  findUnion(arr1, arr2, arr1.size(), arr2.size());

    cout<<"Union of arr1 and arr2 is:"<< endl;
    for (int i = 0; i < Union.size(); i++)
    {
        cout << Union[i] << " ";
    }
    cout << endl;


    return 0;
}
