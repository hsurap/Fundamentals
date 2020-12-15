#include<iostream>
using namespace std;
int legnth (char ch[])
{
    if(ch[0]=='\0')
    {
        return 0;
    }
    return 1+legnth(ch+1);
}
int main()
{
    char ch[100];
    cin>>ch;
    cout<<legnth(ch);
}
