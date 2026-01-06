// Problem Statement: Given an integer N, return the number of digits in N.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<< "Enter the number:"<< endl;
    cin>>n;
    int count =0;
    // while(n>0){
    //     n =n/10;
    //     count++;
    // }

    
//Optimal Approach:
    count = (int)(log10(n)+1);
   

    cout<< "The number of digits are: " << count<< endl;
    return 0;

}