/*
program to read array of input for unknown size.
example:
3
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7

for the above we need to read three arrays of various unknown size
*/

#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;

    string s[n+1];
    int data;

    for(int i=0; i<n+1; i++)
        getline(cin, s[i]);

    for(int i=1; i<n+1; i++)
    {
        istringstream iss(s[i]);
        cout<<"arr "<<i<<" : ";
        while(iss>>data)
            cout<<data<<" ";
        cout<<endl;
    }

    return 0;
}