#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    //base case
    if(n==1) return 1;
    int result=n+sum(n-1);
    return result;
}
int main()
{
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    cout<<sum(n)<<endl;
}