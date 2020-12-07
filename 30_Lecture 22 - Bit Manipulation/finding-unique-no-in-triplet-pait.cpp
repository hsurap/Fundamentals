#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt[64]={0};
    for(int i=0;i<n;i++)
    {
        int j=0;
        int no=a[i];
        while(no>0)
        {
            cnt[j]+=(no&1);
            no=no>>1;
            j++;
        }
    }
    int b=1;
    int ans=0;
    for(int i=0;i<64;i++)
    {
        cnt[i]=(cnt[i])%3;
        ans+=cnt[i]*b;
        b=b<<1;
    }
    cout<<ans;
}
