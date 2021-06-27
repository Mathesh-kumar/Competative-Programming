#include<iostream>
using namespace std;

int eval(int a, int b, char opr)
{
    switch(opr)
    {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
    }
}

int main()
{
    string s;
    cout<<"enter s : ";
    cin>>s;

    int numberLen=0;
    for(; numberLen<s.length(); numberLen++)
        if (!(s[numberLen]>='0' && s[numberLen]<='9'))
            break;
    
    int result = s[0]-'0';
    int j=1, k=numberLen;
    for(;j<numberLen;j++,k++)
        result=eval(result, s[j]-'0', s[k]);

    cout<<"result of s : "<<result;
    return 0;
}