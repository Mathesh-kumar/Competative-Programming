#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int countChild(string s[8][2], string name, int child)
{
    int count = 0;
    for(int i=0; i<8; i++)
    {
    }
}

int main()
{
    string s[8][2] = {{"Surya", "Sivakumar"}, {"Karthi", "Sivakumar"}, {"Sivakumar", "Rakkaiya"}, 
    {"Dev", "Surya"}, {"Umayaal", "Karthi"}, {"Diya", "Surya"}, {"Prabu", "Sivaji"}, 
    {"Vikram", "Prabu"}};

    string input, name;
    int child;

    getline(cin, input);
    istringstream iss(input);
    getline(iss, name, ',');
    iss>>child;

    cout<<countChild(s, name, child);

    return 0;

}