#include<iostream>
using namespace std;
int partition (int a[],int st,int en)
{
    int first_element=a[st];
    int count=0;
    for(int i=st+1;i<=en;i++)
    {
        if(a[i]<=first_element)
            count++;
    }
    int new_index=st+count;
    swap(a[new_index],first_element);

    int i=st,j=en;
    while(i<=new_index&&j>=new_index)
    {
        if(a[i]<=first_element)
            i++;
        else if(a[j]>first_element)
            j--;
        else if(a[i]>first_element&&a[j]<first_element)
        {
            swap(a[i],a[j]);
            i++;j--;
        }
    }
    return new_index;
}
void quick_sort(int a[],int st,int en)
{
    if(st>=en)
        return;
    int p=partition(a,st,en);
    quick_sort(a,st,p-1);
    quick_sort(a,p+1,en);
}
int main()
{
    int a[100];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

