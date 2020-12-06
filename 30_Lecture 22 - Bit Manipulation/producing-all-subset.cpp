#include<iostream>
#include<math.h>
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
    for(int i=0;i<pow(2,n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0 )
            {
                cout<<a[j]<<" ";
            }
        }cout<<endl;
    }
}
