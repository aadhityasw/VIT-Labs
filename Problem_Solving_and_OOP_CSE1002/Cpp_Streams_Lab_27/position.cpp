#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream f1,fo;
	
	char ch;
	string s;
	f1.open("2Apr1",ios :: out);
	for(ch='a';ch<='z';ch++)
	{
		f1<<ch;
	}
	cout<<"File position is at :- "<<f1.tellp()<<endl;
	f1.close();
	f1.open("2Apr1", ios :: in);
	cout<<"File position is at :- "<<f1.tellp()<<endl;
	while(!f1.eof())
	{
		//ch=f1.get();
		f1>>s;
		cout<<"Character :- "<<ch<<"\t"<<"File position is at tellp :- "<<f1.tellp()<<endl;
		cout<<"Character :- "<<ch<<"\t"<<"File position is at tellg :- "<<f1.tellg()<<endl;
	}
	f1.close();
}
