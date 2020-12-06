#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    int position=0;
    for(int i=ans;i>0;i=i>>1)
    {
        if(i&1==1)
        {
            position++;
            break;
        }
        else{
            position++;
        }
    }
    int firstunque=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]&(1<<(position-1)))
        {
            firstunque=firstunque^a[i];
        }
    }
    cout<<firstunque<<endl;
    cout<<(firstunque^ans)<<endl;
}
