#include<bits/stdc++.h>
using namespace std;

//NOTE: max size of the integer array inside main() is 10^6 and bool array is 10^7
// outside int main(): max size of int array is 10^7 and bool array is 10^8

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array:"<< endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    //precomputation/ hashing/ frequency array
    // suppose queries are upto 12 then size of hash will be 12+1
    int hash[1000000] = {0};
    for(int i= 0 ; i<n; i++){
        hash[arr[i]]++;
    }
    //query
    int q;
    cout<<"Enter the number of queries:"<<endl;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetching
        cout<<hash[num]<<endl;
    
    }

    return 0;
    
}



