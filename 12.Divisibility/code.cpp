#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, m;
	cin>>t;

	while(t--)
		cin>>m;
	
	cout<<((m%10 == 0)?"Yes":"No");

	return 0;
}