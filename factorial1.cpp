#include<bits/stdc++.h>
using namespace std;
int print_factorial(int n){
   // if(n==0) return 1;
    //base case
    if(n==1||n==0){
        return 1;
    }
    int result=n*print_factorial(n-1);
    return result;
}
int main()
{
    int n;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;
    cout<<print_factorial(n)<<endl;
    return 0;

}