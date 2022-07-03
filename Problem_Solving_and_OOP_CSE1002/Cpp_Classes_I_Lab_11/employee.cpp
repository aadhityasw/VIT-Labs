#include<iostream>
using namespace std;
class employee
{
	private :
		int eno,esal;
		string ename;
	public :
		void getdata()
		{
			cin>>eno>>esal>>ename;
		}
		void putdata()
		{
			cout<<eno<<endl<<esal<<endl<<ename;
		}
};
int main()
{
	employee e;
	e.getdata();
	e.putdata();
}
