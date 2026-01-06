
// use map in place of integer array to reduce th space

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>> arr[i];
    }

    //pre compute
    map<int, int> mpp;
    for(int i =0; i<n; i++){
        mpp[arr[i]]++;
    }

    // for(auto it: mpp){
    //     cout<<it.first<<":"<<it.second<<endl;
    // }

    int q;
    cout<<"Enter the number of queries:"<<endl;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetching  
        cout<< mpp[num]<< endl;
    }
    return 0;    
}