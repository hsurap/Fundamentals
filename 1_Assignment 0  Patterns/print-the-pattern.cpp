#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int z;
    if (n%2==1)
    {
        for (int i=1;i<=n;i++)
        {
            if(i<=n/2 +1)
            {
                 z =2*i-1;
            }
            else {
                 z= (n+1-i)*2;
            }
        int x=z*n-(n-1);
        for(int j=x;j<x+n;j++)
        {
            cout <<j<<" ";
        }
        cout <<endl;
        }
    }
    else
    {
        for (int i=1;i<=n;i++)
        {
            if(i<=n/2)
            {
                 z =2*i-1;
            }
            else {
                 z= (n+1-i)*2;
            }
        int x=z*n-(n-1);
        for(int j=x;j<x+n;j++)
        {
            cout <<j<<" ";
        }
        cout <<endl;
        }
    }
}
