#include<iostream>
using namespace std;
double func(int x,int n)
{
    if(x>n){return 0;}
    double sum = (1.0/(1<<x))+func(x+1,n) ;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<func(0,n);
}
