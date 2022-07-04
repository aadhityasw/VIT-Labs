#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>
bool isVowel(char c)
{
	c=tolower(c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return(true);
	}
	return(false);
}
using namespace std;
int main()
{
	ifstream fin;
	fin.open("29Mar1.txt");
	string str[200];
	if(!fin)
	{
		cout<<"File reading failed"<<endl;
	}
	else
	{
		cout<<"File created";
		int i=0,j=0;
		while(!fin.eof())
		{
			getline(fin,str[i++]);
		}
		fin.close();
		ofstream fout;
		fout.open("29Mar2.txt");
		for(j=0;j<i;j++)
		{
			/*
			//To invert the case of letters.
			for(int k=0;k<str[j].size();k++)
			{
				if(isupper(str[j][k]))
				{
					str[j][k]=tolower(str[j][k]);
				}
				else if(islower(str[j][k]))
				{
					str[j][k]=toupper(str[j][k]);
				}
			}
			*/
			/*
			//To convert all vowels into upper case.
			for(int k=0;k<str[j].size();k++)
			{
				if(isVowel(str[j][k]))
				{
					str[j][k]=toupper(str[j][k]);
				}
			}
			*/
			
			//fout<<str[j]<<endl;
			
			const char *cho = str[j].c_str();
			cout<<cho<<endl;
			fout.write(cho,strlen(cho));
			fout.write("\n",1);
		}
		fout.close();
	}
}
