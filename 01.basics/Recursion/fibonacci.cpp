//Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.
// 0,1,1, 2, 3, 5,8 ,13......

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number:";
    cin>> n;

    int first =0, sec =1;
    cout<<first<<","<<sec<<",";

    for(int i =0; i<n; i++){
        int next = first +sec;
        cout<<next<<" ";
        first =sec;
        sec = next;

    }


    return 0;


}

