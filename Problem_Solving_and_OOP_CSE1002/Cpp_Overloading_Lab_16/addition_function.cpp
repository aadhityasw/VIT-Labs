#include<iostream>
using namespace std;
class Overload
{
	public :
		int addi(int a, int b)
		{
			return(a+b);
		}
		float addi(float a,float b)
		{
			return(a+b);
		}
		string addi(string a, string b)
		{
			return(a+b);
		}
		char addi(char a, char b)
		{
			return(a+b);
		}
};
int main()
{
	Overload ob;
	int a = ob.addi(10,11);
	float b = ob.addi(10.1f,11.1f);
	string c = ob.addi("abc","def");
	char d = ob.addi('v','z');
	cout<<a<<endl<<b<<endl<<c<<endl<<d;
}
