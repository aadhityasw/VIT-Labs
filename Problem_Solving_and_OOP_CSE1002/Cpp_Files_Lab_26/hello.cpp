#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream st;
	st.open("test.txt", ios::out);
	if(!st)
	{
		cout<<"File creation failed"<<endl;
	}
	else
	{
		cout<<"File created";
		st<<"Hello World";
		st.close();
	}
	return(0);
}
