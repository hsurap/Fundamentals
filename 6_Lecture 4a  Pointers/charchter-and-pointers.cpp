#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    char c[]="abcdef";
    cout<<a<<" "<<c<<endl;
    cout<<a[0]<<" "<<c[0]<<endl;
    cout<<&a[0]<<" "<<&c[0]<<endl;
    cout<<&a[1]<<" "<<&c[1]<<endl;
    char *p=&c[0]; cout<<p<<" "<<&p<<endl;
}
