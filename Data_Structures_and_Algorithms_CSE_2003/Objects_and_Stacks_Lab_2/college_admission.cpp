#include<iostream>
#include<string>
#include <sstream>
using namespace std;
class Student
{
	public :
	int yearAdmit, rank, dob;
	string name, campus, course, regno, concession;
	void generate_no()
	{
		if(yearAdmit<2000)
		{
			regno = "Invalid year of admittance";
			return;
		}
		else
		{
			ostringstream str1;
			str1 << ((int)yearAdmit%100);
			regno = str1.str();
		}
		if(course.compare("CSE")==0)
		{
			regno = regno+"BCE";
		}
		else if(course.compare("ECE")==0)
		{
			regno = regno+"ECE";
		}
		else if(course.compare("ECM")==0)
		{
			regno = regno+"BLC";
		}
		else
		{
			regno = "Invalid Course Name";
			return;
		}
		if(campus.compare("Chennai"))
		{
			regno = regno + "1";
		}
		else if(campus.compare("Vellore"))
		{
			regno = regno + "0";
		}
		else
		{
			regno = "Invalid Campus Name";
			return;
		}
		if(rank>999)
		{
			regno = "Invalid Rank";
			return;
		}
		else if(rank%100 == 0)
		{
			ostringstream str1;
			str1 << rank;
			regno = regno + "0" + str1.str();
		}
		else
		{
			ostringstream str1;
			str1 << rank;
			regno = regno + str1.str();
		}
	}
	void checkConcession()
	{
		if((dob%400==0)||((dob%4==0)&&(dob%100!=0)))
		{
			concession = "You have been given a 50% concession in the hostel fees.";
		}
		else
		{
			concession = "You are not eligible for any concession in the hostel fees.";
		}
	}
};

int main()
{
	int test, cases;
	cout<<"Enter the number of students : ";
	cin>>test;
	Student stu[test];
	for(cases = 0;cases<test;cases++)
	{
		cout<<"Enter the name of the student : ";
		cin>>stu[cases].name;
		cout<<"Enter the year of birth of the student : ";
		cin>>stu[cases].dob;
		cout<<"Enter the year of admittance :- ";
		cin>>stu[cases].yearAdmit;
		cout<<"Enter the campus of admission : ";
		cin>>stu[cases].campus;
		cout<<"Enter the rank of student : ";
		cin>>stu[cases].rank;
		cout<<"Enter the course of admission : ";
		cin>>stu[cases].course;
		stu[cases].generate_no();
		stu[cases].checkConcession();
	}
	cout<<"The student details are as follows : ";
	for(cases = 0;cases<test;cases++)
	{
		cout<<stu[cases].name<<"\t"<<stu[cases].regno<<"\t"<<stu[cases].concession<<endl;
	}
}
