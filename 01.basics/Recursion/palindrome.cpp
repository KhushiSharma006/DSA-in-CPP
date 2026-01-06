//Problem Statement: Given a string, check if the string is palindrome or not. A string is said to be palindrome if the reverse of the string is the same as the string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string:"<< endl;
    cin>> str;
    bool ispalindrome;
    int n = str.length();

    for(int i =0; i<n/2; i++){
        if(tolower(str[i]) != tolower(str[n-1-i])){
            ispalindrome = false;
            break;   
        }else{
            ispalindrome = true;
        }
       
    }

    if(ispalindrome){
        cout<<str <<" is a palindrome string";
    }else{
        cout<<str <<" is not a palindrome string";
        
    }
    return 0;


}