//Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.
//An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int original =n;
    int sum =0;
    int count =0;
    int digit;

    // while(n>0){
    //     n=n/10;
    //     count++;
    // }
    count = (int)(log10(n)+1);

    n=original;
    while(n>0){ 
        digit = n%10;
        sum = sum + pow(digit, count);
        n=n/10;
        
    }

    if(original == sum){
        cout<< original <<" is an Armstrong number"<< endl;
    }else{
        cout<< original <<" is not an Armstrong number"<< endl;
        
    }
    return 0;

}