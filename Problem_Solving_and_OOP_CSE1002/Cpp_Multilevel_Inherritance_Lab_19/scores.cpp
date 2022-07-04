#include<iostream>
using namespace std;
class Person
{
	protected :
		string name;
		int age;
	public :
		void get()
		{
			cout<<"Enter the name and age :-";
			cin>>name>>age;
		}
		void print()
		{
			cout<<name<<endl<<age<<endl;
		}
};
class Student : public Person
{
	private :
		string rollno;
		int marks;
	public :
		void get()
		{
			Person :: get();
			cout<<"Enter the Roll no and marks :-";
			cin>>rollno>>marks;
		}
		void print()
		{
			Person :: print();
			cout<<rollno<<endl<<marks<<endl;
		}
};
class GateScore
{
	private :
		int score;
	public :
		void get()
		{
			cout<<"Enter the GATE score :-";
			cin>>score;
		}
		void print()
		{
			cout<<score<<endl;
		}
};
class PG_Student : private GateScore, Student
{
	private :
		string Dname;
	public :
		void get()
		{
			Student :: get();
			GateScore :: get();
			cout<<"Enter the PG students name :-";
			cin>>Dname;
		}
		void print()
		{
			Student :: print();
			GateScore :: print();
			cout<<Dname<<endl;
		}
};
int main()
{
	PG_Student ob;
	ob.get();
	ob.print();
}
