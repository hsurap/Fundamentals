#include<iostream>
using namespace std;
int arr(int a[],int n,int key,int i)
{
    if(i==n){return -1;}
    if(a[i]==key){return i;}
    arr(a,n,key,i+1);
}
int main()
{
    int a[100];
    int n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout <<arr(a,n,key,0);
}
