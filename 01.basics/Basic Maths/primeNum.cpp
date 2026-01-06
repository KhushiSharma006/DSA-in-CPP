//Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int count =0;

    for(int i =1; i<= sqrt(n); i++){
        if(n%i == 0){
            count++;
            if(n/i != i){
                count++;
            
            }
        }
    }

    if(count == 2){
        cout<< n<< " is a prime number"<< endl;
    }else{  
        cout<< n<< " is not a prime number"<< endl;
    
    }

    return 0;
  
}