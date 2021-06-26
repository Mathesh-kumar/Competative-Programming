#include<iostream>
#include<string.h>

using namespace std;

#define nl "\n"

int main()
{
    // sizeof datatypes;
    cout<<"sizeof string is "<<sizeof(string)<<nl;
    cout<<"sizeof char is "<<sizeof(char)<<nl;
    cout<<"sizeof int is "<<sizeof(int)<<nl;
    cout<<"sizeof float is "<<sizeof(float)<<nl;
    cout<<"sizeof double is "<<sizeof(double)<<nl<<nl;


    // string is a one dimentional array of characters
    string s1 = "hello";
    cout<<"value of s1  = "<<s1<<nl;
    
    cout<<"length of s1 = "<<s1.length()<<nl;
    cout<<"length of s1 = "<<s1.size()<<nl;
    
    cout<<"length of s1 = "<<strlen(s1.c_str())<<nl;
    
    int len;
    for(len=0;s1[len];len++);
    cout<<"length of s1 = "<<len<<nl;
    
    cout<<"size of s1 = "<<sizeof(s1)<<nl<<nl;

    //---------------------------------------------------
    
    char s2[] = {'h','e','l','l','o','\0'};

    cout<<"value of s2 = "<<s2<<nl;
    
    size_t s2Len = strlen(s2);
    cout<<"length of s2 = "<<s2Len<<nl;
    cout<<"length of s2 = "<<strlen(s2)<<nl;
    
    cout<<"size of s2 = "<<sizeof(s2)<<nl;
    cout<<"size of s2[0] = "<<sizeof(s2[0])<<nl;
    cout<<"length of s2 = "<<sizeof(s2)/sizeof(s2[0])<<nl<<nl;
    


    // array of string is a two dimentional array of characters
    string s3[] = {"hello","this","is","mathesh","kumar"};
    cout<<"value of s3 = "<<s3[0]<<"-"<<s3[1]<<"-"<<s3[2]<<"-"<<s3[3]<<"-"<<s3[4]<<nl;
    cout<<"size of s3 = "<<sizeof(s3)<<nl;
    cout<<"size of s3[0] = "<<sizeof(s3[0])<<nl;
    cout<<"length of s3 = "<<sizeof(s3)/sizeof(s3)[0]<<nl<<nl;

    const char *s4[5] = {"hello","this","is","mathesh","kumar"};
    cout<<"value of s4 = "<<s4[0]<<"-"<<s4[1]<<"-"<<s4[2]<<"-"<<s4[3]<<"-"<<s4[4]<<nl;

    char s5[5][8] = {"hello","this","is","mathesh","kumar"};
    cout<<"value of s5 = "<<s5[0]<<"-"<<s5[1]<<"-"<<s5[2]<<"-"<<s5[3]<<"-"<<s5[4]<<nl;
    
    return 0;
}