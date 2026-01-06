#include<bits/stdc++.h>
using namespace std;

//Brute force:
// int main(){
//     int n;
//     cout<<"Enter a number:"<< endl;
//     cin>>n;
//     for(int i =1; i<= n; i++ ){
//         if(n%i == 0){
//            cout<< i<< " ";
//         }
//     }
    
//     cout<< endl;
//     return 0;
// }

// optimal approach
int main(){
    vector<int>v;
    int n;
    cout<<"Enter a number:"<< endl;
    cin>>n;

    // sqrt is a function which increases the T.C, instead of i<= sqrt() use i*i<= n
    for(int i =1; i*i<= n; i++ ){
        if(n%i == 0){
            v.push_back(i);
            if(n/i != i){
                v.push_back(n/i);
            }
        }
    }
   
    sort(v.begin(), v.end());

    cout<<"all divisor of "<< n<< " are: " ;
    for(auto div : v){
        cout<< div<< " ";
        
    }
    cout<< endl;
    return 0;
}


// for more explaination of optimal approach: https://takeuforward.org/data-structure/print-all-divisors-of-a-given-number