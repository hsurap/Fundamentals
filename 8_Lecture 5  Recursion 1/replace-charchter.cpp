#include<iostream>
using namespace std;
void replace (char ch[],char a ,char b)
{
    if(ch[0]=='\0')
        return;
    if(ch[0]!=a)
        replace(ch+1,a,b);
    else{
        ch[0]=b;
        replace(ch+1,a,b);
    }
}
int main()
{
    char ch[100];
    char a,b;//a change to b
    cin>>ch>>a>>b;
    replace(ch,a,b);
    cout<<ch;
}
