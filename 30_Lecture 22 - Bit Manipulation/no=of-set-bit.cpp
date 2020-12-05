#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /*cout<<(n&(n-1))<<endl;
    if((n-1)==(n&(n-1)))
        {cout<<"yes";}
    else{
        cout<<"no";
    }*/
    int count=0;
    while(n!=0)
    {
        count++;
        n=(n&(n-1));
    }
    cout<<count;
}
