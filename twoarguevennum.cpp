#include<bits/stdc++.h>
using namespace std;
void print_even(int starting_num,int n){
    //base case
    if(starting_num==n){
        cout<<n<<endl;
        return;
    }
    print_even(starting_num+2,n);
    cout<<starting_num<<endl;
    return;
}
int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    if(n%2==1){
        n--;
    }
    print_even(2,n);
}