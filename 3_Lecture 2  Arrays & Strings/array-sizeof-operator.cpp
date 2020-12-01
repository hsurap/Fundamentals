#include<iostream>
using namespace std;
void arr(int b[],int n)
{
    //cout<<sizeof(b)<<endl;
    //cout<<b[1];
    for(int i=0;i<n;i++)
    {
        cout <<b[i]<<" ";
    }
}
int main()
{
    int a=6;
    int b[]={1,2,3,4,5};
    cout<<sizeof(b);
    cout <<endl;
    int n=sizeof(b)/sizeof(int);
    arr(b,n);
}
