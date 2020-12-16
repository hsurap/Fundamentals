#include<iostream>
using namespace std;
void remove(char ch[])
{
    if (ch[0]=='\0')
    {
        return ;
    }
    if(ch[0]!='x')
    {
        remove(ch+1);
    }
    else
    {
        int i=1;
        for(;ch[i]!='\0';i++)
        {
            ch[i-1]=ch[i];
        }
        ch[i-1]=ch[i];
        remove(ch);
    }
}
int main()
{
    char ch[100];
    cin>>ch;
    remove(ch);
    cout<<ch;
}
