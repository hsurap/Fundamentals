#include<iostream>
using namespace std;
/*void print(int*p)
{
    cout<<*p;
}*/
//void increment (int *p)
/*{
    p=p+1;
}*/
void increment1(int *p)
{
    (*p)++;
}
int main()
{
    int a=10;
    int *p=&a;
    //print(p);
    //cout<<p<<endl;
    //increment(p);
    //cout<<p;
    cout<<*p<<endl;
    increment1(p);
    cout<<*p;
}
