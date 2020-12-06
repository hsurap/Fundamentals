#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int ans=~((1<<(p+1))-1);
    ans=ans&n;
    cout<<ans;
}
