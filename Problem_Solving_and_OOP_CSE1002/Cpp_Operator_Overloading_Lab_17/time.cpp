#include<iostream>
using namespace std;
class Time
{
	private :
		int h,m,s;
	public :
		Time()
		{
			h=0;
			m=0;
			s=0;
		}
		void operator +(Time t1)
		{
			this->s=this->s+t1.s;
			if(this->s>=60)
			{
				this->s-=60;
				this->m+=1;
			}
			this->m=this->m+t1.m;
			if(this->m>=60)
			{
				this->m-=60;
				this->h+=1;
			}
			this->h=this->h+t1.h;
		}
		void operator ==(Time t1)
		{
			if((this->h==t1.h)&&(this->m==t1.m)&&(this->s==t1.s))
			{
				cout<<"Equal";
			}
			else
			{
				cout<<"Not Equal";
			}
		}
		friend ostream& operator << (ostream &out, Time &tm);
		friend int main();
};
ostream& operator << (ostream &out, Time &tm)
{
	out<<"Sum :-"<<tm.h<<":"<<tm.m<<":"<<tm.s;
	return out;
}
int main()
{
	Time t1,t2,tsum;
	cout<<"Enter time 1 :-";
	cin>>t1.h>>t1.m>>t1.s;
	cout<<"Enter time 1 :-";
	cin>>t2.h>>t2.m>>t2.s;
	tsum+t1;
	tsum+t2;
	//cout<<"Sum :-"<<tsum.h<<":"<<tsum.m<<":"<<tsum.s;
	cout<<tsum;
	t1==t2;
}
