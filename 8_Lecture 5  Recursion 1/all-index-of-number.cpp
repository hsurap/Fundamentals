#include<iostream>
#include<vector>
using namespace std;
vector<int> vect;
void func(int a[],int n,int key ,int x)
{
    if(x==n){return ;}
    if(a[x]==key){vect.push_back(x);}
    func(a,n,key,x+1);
}
int main()
{
    int a[100];
    int n;cin>>n;
    int key;cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    func(a,n,key,0);
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
    cout <<vect.size();
}
