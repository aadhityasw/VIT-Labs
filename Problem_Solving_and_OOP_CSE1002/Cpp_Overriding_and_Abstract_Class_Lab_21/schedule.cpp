#include<iostream>
using namespace std;
class Job_Schedule;
class Job
{
	protected :
		int id;
		string name;
	public :
		float time_req,space_req;
		void get()
		{
			cout<<"Enter the values";
			cin>>id>>name>>time_req>>space_req;
		}
		void print()
		{
			cout<<id<<name<<time_req<<space_req;
		}
		void schedule()
		{
			
		}
		friend Job_Schedule;
};
class Job_Schedule
{
	protected :
		int no;
	public :
		Job *jobs;
		void get()
		{
			
			cin>>no;
			int i;
			for(i=0;i<no;i++)
			{
				jobs[i].get();
			}
		}
		void print()
		{
			int i;
			for(i=0;i<no;i++)
			{
				jobs[i].print();
			}
		}
		virtual void schedule()=0;
};
class time_job : public Job_Schedule
{
	public :
		void schedule()
		{
			cout<<"Time\n";
		}
};
class space_job : public Job_Schedule
{
	public :
		void schedule()
		{
			cout<<"Space\n";
		}
};
int main()
{
	int n;
	Job_Schedule *js;
	time_job t;
	space_job s;
	cout<<"1)Time\n2)Space\n";
	cin>>n;
	switch(n)
	{
		case 1:
			js=&t;
			break;
		case 2 :
			js=&s;
			break;
	}
	js->get();
	js->schedule();
	js->print();
}
