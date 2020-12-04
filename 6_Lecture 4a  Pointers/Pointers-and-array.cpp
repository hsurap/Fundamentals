#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    cout<<a<<" "<<&a[0]<<endl;
    cout<<a+1<<" "<<&a[1]<<endl;
    cout<<sizeof(a)<<" "<<sizeof(&a[0])<<endl;
    cout<<&a<<" "<<&a[0]<<endl;
    int *p=&a[0] ,*q=&a[0];
    cout<<p<<" "<<q<<" "<<&p<<" "<<&q<<endl;
}
