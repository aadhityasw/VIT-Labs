#include<iostream>
using namespace std;
class product
{
	public :
		int pid,pquantity;
		double pprice;
		string pname;
		double pbill;
		void getdata()
		{
			cout<<"Enter id,name,quantity,price\n";
			cin>>pid>>pname>>pquantity>>pprice;
		}
		/*void putdata()
		{
			cout<<"id:\t"<<pid<<endl<<"name:\t"<<pname<<endl<<"Price"<<pprice<<endl<<"Quantity"<<pquantity<<endl<<"Bill:\t"pbill;
		}*/
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
void generatebill(int n, int pno,product t[],int sum)
{
	cout<<"Coustomer No :-"<<n;
	cout<<"Detailed bill :-\n";
	cout<<"id\t"<<"name\t"<<"Price\t"<<"Quantity\t"<<"Bill\t"<<endl;
	int i;
	for(i=0;i<pno;i++)
	{
		cout<<t[i].pid<<"\t"<<t[i].pname<<"\t"<<t[i].pquantity<<"\t"<<t[i].pbill<<endl;
	}
	cout<<"Your Total bill = "<<sum<<endl;
}
int main()
{
	int no,i,j;
	cout<<"Enter the number of Coustomer\t";
	cin>>no;
	product t[no][10];
	int p[no];
	double sum[no];
	for(i=0;i<no;i++)
	{
		cout<<"Enter the number of products by coustomer "<<(i+1)<<"\t";
		cin>>p[i];
		for(j=0;j<p[i];j++)
		{
			t[i][j].getdata();
			t[i][j].compute();
		}
		//t[i][j].putdata();
	}
	for(i=0;i<no;i++)
	{
		for(j=0;j<p[i];j++)
		{
			sum[i]+=t[i][j].pbill;
		}
		generatebill(no,p[i],t[i],sum[i]);
	}
}
