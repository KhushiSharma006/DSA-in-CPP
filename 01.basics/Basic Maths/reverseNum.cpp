
//Problem Statement: Given an integer N return the reverse of the given number.
//Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, digit;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int rev =0;
    while(n>0){
        digit = n%10;
        rev = rev*10+digit;
        n=n/10;
      
    }
    cout<< rev;
    return 0;

}