#include<iostream>
using namespace std;
void merger (int a[],int s,int e)
{
   int mid=(s+e-1)/2;//s+(e-s)/2
   int i=s,j=mid+1,k=0;
   int temp[100];
   while(i<=mid&&j<=e)
   {
       if(a[i]<=a[j]) { temp[k++]=a[i++] ;}
       else          { temp[k++]=a[j++] ;}

   }
   while (i<=mid) { temp[k++]=a[i++] ;}
   while (j<=e)   { temp[k++]=a[j++] ;}
   for(int l=s;l<=e;l++)
    {
        a[l]=temp[l];
    }
}
void merge_sort(int a[],int s,int e)
{
    if(s>=e){return ;}
    int mid=(s+e-1)/2;// s+(e-s)/2
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    merger (a,s,e);
}
int main()
{
    int a[100];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //merger(a,0,n-1);
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
