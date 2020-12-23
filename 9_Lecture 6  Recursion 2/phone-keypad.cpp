#include<iostream>
using namespace std;
char keypad[][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void func(char input[],char output[],int i,int j)
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        cout<<output<<","<<" ";
        return ;
    }
    int digit =input[i]-'0';
    if(digit==0||digit ==1)
    {
        func(input,output,i+1,j);
    }
    for(int k=0;keypad[digit][k]!='\0';k++)
    {
        output[j]=keypad[digit][k];
        func(input,output,i+1,j+1);
    }
}
int main()
{
    char input[100];
    cin>>input;
    char output[100];
    func(input,output,0,0);
}
