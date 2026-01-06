// for small letters(a, b, c, d....) size = char - 'a'
// for capital letters(A, B, C, D....) size = char - 'A'
// for all alphabets size = 256

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;

    //pre compute
    int hash[256] = {0};
    for(int i =0; i<s.length(); i++){
        hash[s[i]]++;
    }
    
    int q;
    cout<<"Enter the number of queries:"<<endl;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        //fetching
        cout<<hash[ch]<<endl;
    }
    return 0;

}