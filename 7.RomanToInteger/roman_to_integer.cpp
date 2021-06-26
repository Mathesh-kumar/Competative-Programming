#include<iostream>
using namespace std;

int romanEqual(char ch)
{
    if(ch=='I') 
        return 1;
    else if(ch=='V')
        return 5;
    else if(ch=='X')
        return 10;
    else if(ch=='L')
        return 50;
    else if(ch=='C') 
        return 100;
    else if(ch=='D') 
        return 500;
    else 
        return 1000;
}

int romanToInt(string s) {
    
    int result = 0;
    int sLen;
    for(sLen=0; s[sLen]; sLen++);
    
    if(sLen == 1)
        return romanEqual(s[0]);
    else
    {
        for(int i=0; i<sLen-1;)
        {
            if(romanEqual(s[i]) >= romanEqual(s[i+1]))
            {
                result += romanEqual(s[i]);
                if(i == sLen-2)
                    result += romanEqual(s[++i]);
                i+=1;
            }
            else
            {
                result += (romanEqual(s[i+1]) - romanEqual(s[i]));
                if(i+1 == sLen-2)
                    result += romanEqual(s[i+2]);
                i+=2;
            }
                
        }
        return result;
    }
}

int main()
{
    string s;
    cout<<"Enter a roman number : ";
    cin>>s;
    cout<<"Equivalent integer value for "<<s<<" is "<<romanToInt(s);
    return 0;
}