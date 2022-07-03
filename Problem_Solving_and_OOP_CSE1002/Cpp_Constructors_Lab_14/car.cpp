#include<iostream>
using namespace std;
class car
{
	public :
		static int i;
		car()
		{
			i++;
			cout<<i<<endl;
		}
};
int car :: i=0;
int main()
{
	car p[5];
}
