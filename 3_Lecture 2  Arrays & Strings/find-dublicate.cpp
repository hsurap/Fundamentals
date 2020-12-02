#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];//no are from 0 to n-2 only
    }
    int s=((n-2)*(n-1))/2;
    int su=0;
    for(int i=0;i<n;i++)
    {
         su=su+a[i];
    }
    cout<<su<<" "<<s<<endl;
    cout<<su-s;

}
