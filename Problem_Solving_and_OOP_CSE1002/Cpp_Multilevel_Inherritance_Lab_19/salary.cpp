#include<iostream>
using namespace std;
class Person
{
	private :
		string name,mobile;
		char gender;
	public :
		void get()
		{
			cout<<"Enter the name, mobile number and gender :-";
			cin>>name>>mobile>>gender;
		}
		void print()
		{
			cout<<name<<endl<<mobile<<endl<<gender<<endl;
		}
};
class Employee : private Person
{
	private :
		int grade;
		string id,desig,dob,dname;
	public :
		Employee()
		{
			grade=0;
		}
		void get()
		{
			Person :: get();
			cout<<"Enter the ID, Department Name, Designation, Grade and DOB :-";
			cin>>id>>dname>>desig>>grade>>dob;
		}
		void put()
		{
			cout<<id<<endl<<dname<<endl<<desig<<endl<<grade<<endl<<dob<<endl;
		}
};
class RE : private Employee
{
	private :
		int basic,da,hra;
		double total;
	public :
		RE()
		{
			basic=0;
			da=0;
		}
		void get()
		{
			Employee :: get();
			cout<<"Enter the basic,da and hra :- ";
			cin>>basic>>da>>hra;
		}
		void compute()
		{
			total=basic+(0.1*hra)+(0.25*da);
		}
		void put()
		{
			Employee :: put();
			cout<<"Total Salary :-"<<total<<endl;
		}
};
class DW : private Employee
{
	private :
		int noh,wph;
		double total;
	public :
		DW()
		{
			noh=0;
			wph=0;
			total =0.0;
		}
		void get()
		{
			Employee :: get();
			cout<<"Enter the number of hours of work and the work per hour :- ";
			cin>>noh>>wph;
		}
		void compute()
		{
			total = noh*wph;
		}
		void put()
		{
			Employee :: put();
			cout<<"Total Salary :-  "<<total<<endl;
		}
};
class Con : private Employee
{
	private :
		int amt,total;
	public :
		Con()
		{
			amt=0;
			total=0;
		}
		void get()
		{
			Employee :: get();
			cout<<"Enter the Amount :- ";
			cin>>amt;
		}
		void compute()
		{
			total=amt;
		}
		void put()
		{
			Employee :: put();
			cout<<"Total Salary :-  "<<total<<endl;
		}
};
int main()
{
	int cho=0;
	cout<<"1. Regular Employee\n2. DW\n3. Consolidated\nEnter your choice :-";
	cin>>cho;
	while(cho!=4)
	{
		if(cho==1)
		{
			RE ob;
			ob.get();
			ob.compute();
			ob.put();
		}
		else if(cho==2)
		{
			DW ob;
			ob.compute();
			ob.put();
		}
		else if(cho==3)
		{
			Con ob;
			ob.compute();
			ob.put();
		}
		else
		{
			break;
		}
		cout<<"1. Regular Employee\n2. DW\n3. Consolidated\nEnter your choice :-";
		cin>>cho;
	}
	
}
