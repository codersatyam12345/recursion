#include<bits/stdc++.h>
using namespace std;
void print(int n){
    //base case
    if(n==1){
        cout<<n<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    print(n);
}