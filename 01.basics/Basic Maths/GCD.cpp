//Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
// Example 1:Input: N1 = 9, N2 = 12
// Output: 3
// Explanation:
// Factors of 9: 1, 3, 9
// Factors of 12: 1, 2, 3, 4, 6, 12
// Common Factors: 1, 3
// Greatest common factor: 3 (GCD)



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter the first number:"<<endl;
    cin>>n1;
    cout<<"Enter the second number:"<<endl;
    cin>>n2;
    
    //Brute force approach:
    // int gcd =1;
    // for(int i=1; i< min(n1, n2); i++){
    //     if(n1%i == 0 && n2%i == 0){
    //         gcd = i;
    //     }
    // }
    
    //Better Approach:
    // int gcd;
    // for(int i = min(n1, n2); i>=1;i--){
    //     if(n1%i== 0 && n2%i ==0){
    //         gcd =i;
    //         break;
    //     }
    // }

    // Optimal Approach:
    int gcd;
    while(n1 != 0 && n2 != 0){
        if(n1>n2){
            n1 = n1-n2;
            
        }else{
            n2 = n2-n1; 
        }
    }

    
    if(n1 ==0){
        gcd =n2;
    }else{
        gcd =n1;    
    }
    
    cout<<"GCD of "<< n1<<", "<< n2<< " is: "<< gcd<<endl;
    return 0;

}


// Optimal Approach:

/*Euclidean Algorithm:

The Euclidean Algorithm is a method for finding the greatest common divisor (GCD)
of two numbers. It operates on the principle that the GCD of two numbers remains
the same even if the smaller number is subtracted from the larger number.

To find the GCD of n1 and n2 where n1 > n2:
1. Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
2. Once one becomes 0, the other is the GCD of the original numbers.

Example:
n1 = 20, n2 = 15

gcd(20, 15) = gcd(20 - 15, 15) = gcd(5, 15)
gcd(5, 15)  = gcd(15 - 5, 5)  = gcd(10, 5)
gcd(10, 5)  = gcd(10 - 5, 5) = gcd(5, 5)
gcd(5, 5)   = gcd(5 - 5, 5)  = gcd(0, 5)

Hence, return 5 as the GCD.*/
