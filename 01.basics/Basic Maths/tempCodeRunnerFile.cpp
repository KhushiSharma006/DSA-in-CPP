#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cout<<"Enter a number:"<< endl;
    cin>>n;
    for(int i =1; i<= n/2; i++ ){
        if(n%i == 0){
            v.push_back(i);
        }
    }
    v.push_back(n);
    cout<<"all divisor of"<< n<< " are: " ;
    for(int div : v){
        cout<< div<< " ";
        
    }
    cout<< endl;
    return 0;
}