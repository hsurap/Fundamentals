#include<iostream>'
using namespace std;
void func(char a1[],char a2[],int i,int j)
{
    if(a1[i]=='\0')
    {
        a2[j]='\0';
        cout<<a2<<","<<" ";
        return ;
    }
    a2[j]=a1[i];
    func(a1,a2,i+1,j+1);
    func(a1,a2,i+1,j);
}
int main()
{
    char a1[100];
    cin>>a1;
    char a2[100];
    func(a1,a2,0,0);
}
