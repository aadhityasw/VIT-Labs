#include<iostream>
using namespace std;
class Person
{
	private :
		string name,gender;
		int age;
	public :
		void getinfo()
		{
			cout<<"Enter Name :- ";
			cin>>name;
			cout<<"Enter Gender :- ";
			cin>>gender;
			cout<<"Enter age :- ";
			cin>>age;
		}
};
class Employee : public Person
{
	private :
		string empid,empdept,empdesig;
	public :
		void getinfo()
		{
			cout<<"Enter Employee ID :- ";
			cin>>empid;
			cout<<"Enter Employee Department ID :- ";
			cin>>empdept;
			cout<<"Enter Employee Designation :- ";
			cin>>empdesig;
		}
};
class Fullemployee : public Employee
{
	private :
		double da,hra,basic it;
	public :
		void getinfo()
		{
			cout<<"Enter Employee Basic Salary :- ";
			cin>>basic;
			cout<<"Enter Employee HRA :- ";
			cin>>hra;
			cout<<"Enter Employee DA :- ";
			cin>>da;
			cout<<"Enter Employee IT :- ";
			cin>>it;
		}
		void compute()
		{
			sal = basic + (hra*basic/100) + (da*basic/100) - (it*basic/100);
		}
		void putinfo()
		{
			cout<<"Salary of the Employee :- "<<sal;
		}
};
class Houremployee : public Employee
{
	private :
		double nohour,salperhour,sal;
	public :
		void getinfo()
		{
			cout<<"Enter Employee's time of work :- ";
			cin>>nohour;
			cout<<"Enter Employee's salary per hour :- ";
			cin>>salperhour;
		}
		void compute()
		{
			sal = nohour*salperhour;
		}
		void putinfo()
		{
			cout<<"Salary of the Employee :- "<<sal;
		}
};
class Student : public Person
{
	private :
		string regno;
};
int main()
{
	int ch,cho;
	cout<<"Choices :- \n1)Employee\n2)Student\n3)Exit\nEnter your Choice :- ";
	switch ch
	{
		case 1:
			cout<<"Choices :- \n1)Full time Employee\n2)Part time Employee\n3)Exit\nEnter your Choice :- ";
			cin>>cho;
			switch cho
			{
				case 1 :
					
					break;
				case 2 :
					
					break;
				case 3 :
					break;
				default :
					cout<<"Enter a valid choice.\n";
			};
			break;
		case 2 :
			
			break;
		case 3 :
			cout<<"Thank You";
			break;
		default :
			cout<<"Enter a valid choice.\n";
	}
}