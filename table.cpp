#include<bits/stdc++.h>
using namespace std;
void print_table(int n,int num){
    //base case
    if(num==1){
        cout<<n<<endl;
        return;
    }
    print_table(n,num-1);
    cout<<(n*num)<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    print_table(n,10);
}