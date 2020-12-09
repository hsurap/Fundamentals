#include<iostream>
using namespace std;
int print (int n)
{
    if(n<10){return 1;}
    return 1+print(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout <<print (n);
}
