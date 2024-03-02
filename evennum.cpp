#include<bits/stdc++.h>
using namespace std;
void even_print(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    even_print(n-2);
    return;
}
int main()
{
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    if(n%2==1){
        n--;
    }
    even_print(n);
}