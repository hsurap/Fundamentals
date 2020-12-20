#include<iostream>
using namespace std;
int main()
{
    string s1="abc";
    cout<<s1<<endl;
    string s2="def";
    cout<<s2<<endl;
    string s3;
    s3=s1+s2;
    cout<<s3<<endl;
    string s4;
    cin>>s4;
    cout<<s4<<endl;
    string s5;
    getline(cin,s5);
    cout<<s5<<endl;
    for(int i=0;i<s5.size();i++)
    {
        cout<<s5[i]<<" ";
    }
    cout<<endl;
    cout<<s5.size()<<endl;
    cout<<s5.substr(3)<<endl;
    cout<<s5.substr(3,6)<<endl;
    cout<<s5.find("us")<<endl;
}
