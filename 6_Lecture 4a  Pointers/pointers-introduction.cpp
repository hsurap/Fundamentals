#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *a1=&a;
    cout<<a<<" "<<a1<<" "<<&a<<endl;
    cout<<sizeof(a)<<" "<<sizeof(&a)<<endl;
    char c='d';
    char *c1=&c;
    cout<<c<<" "<<c1<<" "<<&c<<endl;
    cout<<sizeof(c)<<" "<<sizeof(c1)<<endl;
    int e[5]={1,2,3,4,5};
    cout<<e<<" "<<e+1<<" "/*<<e++*/<<endl;
    int *ptr=e;
    cout<<ptr<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(e+i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<(e+i)<<" ";
    }
}
