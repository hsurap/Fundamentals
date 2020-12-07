#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[20];
    cin>>ch;
    int len=strlen(ch);
    int ans=0;
    ans=(1<<len)-2;
    cout<<ans<<endl;
    cout<<len<<endl;
    for(int i=len-1,pos=0;i>=0;i--,pos++)
    {
        if(ch[i]=='7')
        {
            ans+=(1<<pos);
        }
    }
    cout <<ans+1;
}
