using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	string str;
	cin>>str;
	int f = 1;
	for(int i=0;i<str.length();i++)
	{
		if (str[i] != str[str.length()-i-1])
		{
			f = 0;
			break;
		}
	}
	if(f==0)
	{
		cout<<"Not a palindrome";
	}
	else
	{
		cout<<"Palindrome";
	}
}