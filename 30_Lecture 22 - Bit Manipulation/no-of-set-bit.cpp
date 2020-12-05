#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int ans=0;
    for(int i=no;i>0;i=i>>1)
    {
        ans+=i&1;
    }
    cout<<ans;
}
