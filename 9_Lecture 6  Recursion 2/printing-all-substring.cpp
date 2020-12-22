#include<iostream>
using namespace std;
void sub(string s1,char out[],int i,int j)
{
    if(s1[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<","<<" ";
        return ;
    }
    out[j]=s1[i];
    sub(s1,out,i+1,j+1);
    sub(s1,out,i+1,j);
}
int main()
{
    string s1;
    cin>>s1;
    int s2=s1.size();
    char out[1<<s2];
    sub(s1,out,0,0);
}
