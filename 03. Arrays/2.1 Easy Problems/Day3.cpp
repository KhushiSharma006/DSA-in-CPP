/*
11. Find missing number in an array
12.Maximum Consecutive Ones
13..Find the number that appears once, and other numbers twice.
14.Longest subarray with given sum K(positives)
15.Longest subarray with sum K (Positives + Negatives)
*/

#include <bits/stdc++.h>
using namespace std;

/*11.PS: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N.
Find the number(between 1 to N), that is not present in the given array..*/

// NOTE: sum of n natural number: (n*(n+1))/2

int missingNumber(vector<int> &arr, int n)
{
    int sum = (n * (n + 1)) / 2;
    int sumOfArr = 0;

    for (int i = 0; i < n; i++)
    {
        sumOfArr += arr[i];
    }
    return sum - sumOfArr;
}

// 12.  Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array..

int maxConsecutiveOnes(vector<int> &arr, int n)
{
    // cnt → counts the current streak of 1’s
    // maxCnt → stores the maximum streak found so far

    int cnt = 0;
    int maxCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        maxCnt = max(cnt, maxCnt);
    }
    return maxCnt;
}

// 13. PS: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
// Brute force: using linear search
// Better: hashing using map Data Structure
// Optimal: using XOR operation -> Property 1: a^a = 0, Property 2: a^0 =a

int singleNumber(vector<int> &arr, int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}

// 14. Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
// 2-pointer Approach
int longestSubarray(vector<int> &arr2, int n, int k)
{
    int maxLen = 0;
    int left = 0;
    int right = 0;
    int sum = arr2[0];

    while (right < n)
    {

        // If the sum exceeds K, shrink the window
        while (left <= right && sum > k)
        {
            sum -= arr2[left];
            left++;
        }
        // store the maximum length
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
            sum += arr2[right];
    }
    return maxLen;
}

int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 5, 6};
    vector<int> arr1 = {0, 1, 0, 1, 0, 1, 1, 1, 0, 1};
    vector<int> arr2 = {1, 2, 3, 1, 2, 4, 4};

    cout << "The missing number is:" << missingNumber(arr, n) << endl;

    cout << "Maximum consecutiveOnes in the array:" << maxConsecutiveOnes(arr1, arr1.size()) << endl;

    cout << "Number that appears once is:" << singleNumber(arr2, arr2.size()) << endl;

    int sum = 6;
    cout << "The longest subarray is:" << longestSubarray(arr2, arr2.size(), sum);

    return 0;
}