#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=1){return 1;}
    return n*fact(n-1);
}
int fib(int n)
{
    if (n==0||n==1){return n;}
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<fib(n)<<endl;
}
