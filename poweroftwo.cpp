#include<bits/stdc++.h>
using namespace std;
int power(int num,int n){
    if(n==0) return 1;
    if(n==1){
        return num;
    }
    int result=num*power(num,n-1);
    return result;
}
int main()
{
    int n;
    cout<<"Enter the power:"<<endl;
    cin>>n;
    cout<<power(2,n)<<endl;
}