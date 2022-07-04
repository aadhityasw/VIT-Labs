#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l;
	list<int> :: iterator i;
	list<int> :: iterator ii;
	for(int i=0;i<5;i++)
	{
		l.push_back(i);
	}
	for(i=l.begin();i!=l.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	for(i=--(l.end());i!=--(l.begin());i--)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	//l.pop_front();
	cout<<l.size();
	cout<<endl;
	ii=l.begin();
	
	advance(ii,3);
	l.insert(ii,2,22);
	for(i=l.begin();i!=l.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl<<*ii;
	l.insert(ii,11);
	cout<<endl;
	for(i=l.begin();i!=l.end();i++)
	{
		cout<<*i<<" ";
	}
}
