#include<iostream>
#include<cmath>
using namespace std;

#define nl "\n"

int main()
{
    // compare() - compare two strings
    string a="aa", b="aa";
    cout<<"Comapre aa & aa (str1==str2 -> 0): "<<(a.compare(b))<<nl;

    a="ab", b="aa";
    cout<<"Comapre ab & aa (str1>str2 -> 1): "<<(a.compare(b))<<nl;

    a="aa", b="ab";
    cout<<"Comapre aa & ab (str1<str2 -> -1): "<<(a.compare(b))<<nl<<nl;

    // length() - find length of the string
    cout<<"Length of the string 'aa' : "<<a.length()<<nl;

    // swap() - swap two values of string
    cout<<"Before swap : "<<a<<" "<<b<<nl;
    a.swap(b);
    cout<<"After swap : "<<a<<" "<<b<<nl;

    // substr() - get substring from a given string
    a = "hellogood";
    cout<<"Substring of 'hellogood' : "<<a.substr(5,4)<<nl;

    // size() - calculate size of the string
    cout<<"Size of 'hellogood' : "<<a.size()<<nl;
    
    // replace() - replaces the portion of string that begins at character position pos and spans len characters
    a = "Hello to C";
    cout<<"Replace substring in 'Hello to C' : "<<a.replace(9,1,"C++")<<nl;

    // append() -extend the string by appending at the end of the current value.
    cout<<"Append ', C' to 'Hello to C++' : "<<a.append(", C")<<nl;
    return 0;
}