#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream st;
	st.open("test.txt", ios::in);
	if(!st)
	{
		cout<<"File not created"<<endl;
	}
	else
	{
		char ch;
		string srg;
		
		/*while(!st.eof())
		{
			st>>ch;
			cout<<ch;
		}
		cout<<endl;*/
		
		/*getline(st,srg);
		cout<<srg<<endl;*/
		
		/*while(!st.eof())
		{
			ch=st.get();
			cout<<ch;
		}*/
		
		srg = st.getline(st,100,' ');  //Not working
		
		cout<<srg;
		
		st.close();
	}
	return(0);
}
