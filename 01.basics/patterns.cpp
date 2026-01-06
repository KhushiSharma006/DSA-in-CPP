
//square pattern of stars
#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<< "*";
        }
        cout<< endl;
    }
}

//triangle pattern of stars
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<< "*";
        }
        cout<< endl;
    }
}

// downward triangle of stars
void downwardTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<< "*";
        }
        cout<< endl;    
    }
}

// Equlateral triangle of stars
//     *
//    ***
//   *****
//  *******
void equilateralTriangle(int n){
    for(int i = 0; i<n; i++){
        // for starting spaces
        for(int j =0; j< n-1-i; j++){
            cout<<" ";
        }

        // for stars
        for(int j =0; j<2*i-1; j++){
            cout<<"*";
        }
        // for ending spaces
        for(int j =0; j< n-1-i; j++){
            cout<<" ";
        }

        cout<< endl;
    }
}


int main(){
    int n;
    cout << "Enter number of rows:"<< endl;
    cin >> n;
    //pattern1(n);
    //pattern2(n);
    downwardTriangle(n);
    equilateralTriangle(n);
    return 0;
}

