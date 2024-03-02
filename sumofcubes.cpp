#include<bits/stdc++.h>
using namespace std;
int sum_of_cubes(int n){
    //base case
    if(n==1) return 1;
    int result=n*n*n+sum_of_cubes(n-1);
    return result;
}
int main()
{
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    cout<<sum_of_cubes(n)<<endl;
}