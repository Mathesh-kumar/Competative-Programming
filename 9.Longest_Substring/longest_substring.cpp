#include<iostream>

#include <string>
#include <sstream>

using namespace std;

int longestSubstring(string s)
{
    int sLen=0, sMax=0, tempLen=0, i;
    for(;s[sLen];sLen++);
    string temp = "";

    for(i=0;i<sLen;i++)
    {
        if(tempLen==0 || temp.find(s[i])>tempLen)
            temp+=s[i];
        else
            temp = s[i];

        tempLen = temp.length();
        if(tempLen > sMax)
        sMax = tempLen;
    }

    return sMax;
}

int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin, s);

    cout<<longestSubstring(s);

    return 0;
}