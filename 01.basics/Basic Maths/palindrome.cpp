
//Problem Statement: Given an integer N, return true if it is a palindrome else return false.
//A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, digit;
    cout<< "Enter a number;"<< endl;
    cin>> n;
    int original =n;
    int rev = 0;
    while(n>0){
        digit = n%10;
        rev = rev*10+digit;
        n=n/10;
    }

    if(original == rev){
        cout<< original <<" is a palindrome number"<< endl;
    
    }else{
        cout<< original <<" is not a palindrome number"<< endl;
        
    }
    return 0;

}