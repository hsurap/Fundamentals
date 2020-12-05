#include<iostream>
using namespace std;
int main()
{
    int n,p,a=1;
    cin>>n>>p;
    int bit;
    cin>>bit;
    if(bit==1)
    {
        int ans=a<<p;
        cout<<(n|ans);
    }
    else{
        int ans=a<<p;
        cout<<(n^ans);
    }
}
