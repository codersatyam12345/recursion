#include<bits/stdc++.h>
using namespace std;
void print_odd(int n){
    //base case
    if(n==1){
        cout<<n<<endl;
        return;
    }
    print_odd(n-2);
    cout<<n<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    if(n%2==0){
        n--;
    }
    print_odd(n);
}