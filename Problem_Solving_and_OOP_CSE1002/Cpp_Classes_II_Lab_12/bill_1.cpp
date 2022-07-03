#include<iostream>
using namespace std;
class product
{
	int pid,pquantity;
	double pprice;
	string pname;
	public :
		double pbill;
		void getdata()
		{
			cout<<"Enter id,name,quantity,price\n";
			cin>>pid>>pname>>pquantity>>pprice;
		}
		void putdata()
		{
			cout<<"id:\t"<<pid<<endl<<"name:\t"<<pname<<endl<<"Price"<<pprice<<endl<<"Quantity"<<pquantity<<endl<<"Bill:\t"pbill;
		}
		void compute()
		{
			pbill=pprice*pquantity;
			if((pbill<1000)&&(pbill>500))
			{
				pbill*=0.9;
			}
			else if((pbill<2000)&&(pbill>1000))
			{
				pbill*=0.85;
			}
			else if(pbill>2000)
			{
				pbill*=0.2;
			}
		}
};
int main()
{
	int no,i;
	double sum;
	cout<<"Enter the number of Objects chosen\t";
	cin>>no;
	product t[no];
	for(i=0;i<no;i++)
	{
		t[i].getdata();
		t[i].compute();
		t[i].putdata();
	}
	for(i=0;i<no;i++)
	{
		sum+=t[i].pbill;
	}
	cout<<"Your Total bill = "<<sum<<endl;
	generatebill();
}
