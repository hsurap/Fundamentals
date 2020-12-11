#include<iostream>
using namespace std;
int func(int n)
{
    if(n<=9)
    {
        if(n==0){return 1;}
        else{return 0;}
    }
    int ans=0;
    if(n%10==0){ans=1;}
    return ans+func(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<func(n);
}
