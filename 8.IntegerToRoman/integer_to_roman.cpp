#include<iostream>
using namespace std;

string intToRoman(int temp)
{
    int intValue[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanValue[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string result = "";

    while(temp>=1)
    {
        int i=0;
        if(temp<90)
            i=6;
        for(; i<13; i++)
            if(temp>=intValue[i])
                break;

        temp-=intValue[i];
        result+=romanValue[i];
    }

    return result;
}

int main()
{
    int n;
    cout<<"Enter an integer number : ";
    cin>>n;
    cout<<"Equivalent integer value for "<<n<<" is "<<intToRoman(n);

    return 0;
}