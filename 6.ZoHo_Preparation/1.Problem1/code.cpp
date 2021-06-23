/*
Write a program to Generate a random 10 digit no? (No digits should repeat).
    a.	First digit should be divisible by 1
    b.	First 2 digits should be divisible by 2
    c.	First 3 digits should be divisible by 3
    d.	First 10 digits should be divisible by 10. 
*/

#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;


long long randomNumber()
{
    char output[11];

    while(true)
    {
        srand(unsigned(time(0)));
        char arr1[] = {'2','4','6','8'};
        random_shuffle(&arr1[0], &arr1[3]);
        char arr2[] = {'1','2','3','4','5','6','7','8','9'};
        random_shuffle(&arr2[0], &arr2[8]);

        output[0] = arr2[0];
        output[1] = arr1[0];

        if(output[0] != output[1])
        {
            output[2] = arr2[1];
            output[3] = '\0';
            int temp1 = atoi(output);
            if(temp1%3 == 0 && (output[0]!=output[1]) && (output[1]!=output[2]) && (output[0]!=output[3]))
            {
                for(int i=0, j=3; i<9; i++)
                {
                    char* end = output + sizeof(output) / sizeof(output[0]);            
                    char* position = std::find(output, end, arr2[i]);
                    if(position != end)
                        continue;
                    else
                    {
                        output[j] = arr2[i];
                        j = j+1;
                    }
                }
                output[9] = '0';
                output[10] = '\0';
                break;
            }
        }
    }
    return stoll(output);
}

int main()
{
    cout<<randomNumber()<<"\n";
    return 0;
}
