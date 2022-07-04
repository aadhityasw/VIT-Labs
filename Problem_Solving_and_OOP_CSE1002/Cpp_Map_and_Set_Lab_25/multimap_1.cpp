#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,char>m;
	int i;
	for(i=65;i<70;i++)
	{
		m.insert(pair<int,char>(i,(char)i));
	}
	map<int,char> :: iterator itr;
	m.insert(pair<int,char>(67,'A'));  //No use as it does not make any changes.
	for(itr=m.begin();itr!=m.end();itr++)
	{
		cout<<itr->first<<"\t"<<itr->second<<endl;
	}
}
