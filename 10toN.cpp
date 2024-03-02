#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==10){
        cout<<n<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
    return;
}
int  main()
{
    int n;
    cout<<"Enter the number greater then 10:"<<endl;
    cin>>n;
    print(n);
}