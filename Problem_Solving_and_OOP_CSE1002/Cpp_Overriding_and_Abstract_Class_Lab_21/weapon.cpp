#include<iostream>
using namespace std;
class Weapon
{
	public :
		virtual void print()
		{
			cout<<"Weapon\n";
		}
};
class Bomb : public Weapon
{
	public :
		void print()
		{
			cout<<"Bomb\n";
		}
};
class Gun : public Weapon
{
	public :
		void print()
		{
			cout<<"Gun\n";
		}
};
class Knife : public Weapon
{
	public :
		void print()
		{
			cout<<"Knife\n";
		}
};
class Load 
{
	public :
		void print(Weapon *w)
		{
			w->print();
		}
};
int main()
{
	//Weapon w;
	Bomb b;
	Gun g;
	Knife k;
	//w.print();
	//b.print();
	//g.print();
	
	Weapon *w;
	int n;
	bool f=true;
	Load l;
	do
	{
		cout<<"1)Bomb\n2)Gun\n3)Knife\n";
		cin>>n;
		switch(n)
		{
			case 1:
				w=&b;
				break;
			case 2 :
				w=&g;
				break;
			case 3 :
				w=&k;
				break;
			default :
				f=false;
		}
		if(f==false)
		{
			break;
		}
		l.print(w);
	}while(f==true);
}
