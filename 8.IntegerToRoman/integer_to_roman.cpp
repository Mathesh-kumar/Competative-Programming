#include<iostream>
using namespace std;

string intEqual(int n)
{
    if(n==1) 
        return "I";
    else if(n==4)
        return "IV";
    else if(n==5)
        return "V";
    else if(n==9)
        return "IX";
    else if(n==10)
        return "X";
    else if(n==40)
        return "XL";
    else if(n==50)
        return "L";
    else if(n==90) 
        return "XC";
    else if(n==100) 
        return "C";
    else if(n==400) 
        return "CD";
    else if(n==500) 
        return "D";
    else if(n==900) 
        return "CM";
    else 
        return "M";
}

string intToRoman(int temp)
{
    int value[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; 
    string result = "";

    while(temp>=1)
    {
        int i;
        for(i=0; i<13; i++)
            if(temp>=value[i])
                break;

        temp-=value[i];
        result+=intEqual(value[i]);
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