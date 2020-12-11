#include<iostream>
using namespace std;
void func(int n,char A,char B,char C)
{
    if(n==0){return ;}
    func(n-1,A,C,B);
    cout<<"move "<<n<<" "<<"from "<<A<<" "<<"to "<<C<<endl;
    func(n-1,B,A,C);
}
int main()
{
    int n;cin>>n;
    char a,b,c;
    func(n,'a','b','c');
}
