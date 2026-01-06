//Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

#include<bits\stdc++.h>
using namespace std;

int sum(int n){
    if (n==0) return 0;
    return n+sum(n-1);

}


int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Sum :"<<sum(n);
    return 0;

}