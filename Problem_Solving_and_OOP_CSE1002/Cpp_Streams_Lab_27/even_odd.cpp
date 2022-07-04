#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	fin.open("3Apr2019.txt",ios::in);
	/*fin.seekg(10);
	char a[20];
	fin.read(a,5);
	a[5]='\0';
	cout<<a;*/
	
	/*fin.seekg(0,ios::end);
	int size=fin.tellg();
	for(int j=1;j<=size;j++)
	{
		fin.seekg(-j,ios::end);
		char ch=fin.get();
		cout<<ch;
	}*/
	fstream f1,f2;
	f1.open("Even.txt",ios::out);
	f2.open("Odd.txt",ios::out);
	fin.seekg(0,ios_base::end);
	int size=fin.tellg();
	for(int j=0;j<size;j++)
	{
		if(j%2==0)
		{
			fin.seekg(j,ios_base::beg);
			char ch=fin.get();
			f1<<ch;
		}
		else
		{
			fin.seekg(j,ios_base::beg);
			char ch=fin.get();
			f2<<ch;
		}
	}
	f1.close();
	f2.close();
	fin.close();
}