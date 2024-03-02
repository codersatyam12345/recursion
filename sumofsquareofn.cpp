#include<bits/stdc++.h>
using namespace std;
int sum_of_square(int n){
    //base case
    if(n==1){
        return 1;
    }
    int result=n*n+sum_of_square(n-1);
    return result;
}
int main()
{
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    cout<<sum_of_square(n)<<endl;
}