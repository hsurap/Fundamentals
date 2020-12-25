#include<iostream>
using namespace std;
void func(string s,int l)
{
    for (int i=0;i<l;i++)
    {
        int c = 1;
        while (i<l-1&&s[i]==s[i+1])
        {
            c++;
            i++;
        }
        if(c==1)
        {
            cout<<s[i];
        }
        else{
            cout<<s[i]<<c;
        }

    }
}
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    func(s,l);
}
