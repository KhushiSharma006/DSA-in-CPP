//Print 1 to N using Recursion


#include<bits\stdc++.h>
using namespace std;

////Problem Description: Given an integer N, write a program to print numbers from 1 to N.
void print1toN(int cnt, int n)
{
    
    if(cnt>n) return;

    cout<<cnt<< endl;
    print1toN(cnt+1, n);

}

//Problem Description: Given an integer N, write a program to print numbers from N to 1.
void printNto1(int n, int cnt){
    if(n<cnt) return;
    cout<<n<<endl;
    printNto1(n-1,cnt);
    


}

int main()
{
	int n;
    cout<<"Enter the value of n:";
	cin>>n;
	print1toN(1, n);
    printNto1(n, 1);
	return 0;
}