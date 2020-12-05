#include<iostream>
using namespace std;
int main()
{
    int no,position;
    cin>>no>>position;
    int ans=(no>>position);
    cout<<(ans&1);

}
