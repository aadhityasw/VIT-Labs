#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>s;
	s.insert(22);
	s.insert(2);
	s.insert(44);
	s.insert(84);
	s.insert(1);
	set<int> :: iterator itr;
	for(itr=s.begin();itr!=s.end();itr++)
	{
		cout<<*itr<<endl;
	}
	s.erase(1);
	cout<<"After Erasing :- \n";
	for(itr=s.begin();itr!=s.end();itr++)
	{
		cout<<*itr<<endl;
	}
	set<int>s1;
	itr=s.begin();
	cout<<*s.upper_bound(50);
}
