#include<iostream>
#include<map>
using namespace std;
int main()
{
	multimap<int,char>m;
	int i;
	for(i=65;i<70;i++)
	{
		m.insert(pair<int,char>(i,(char)i));
	}
	multimap<int,char> :: iterator itr;
	m.insert(pair<int,char>(67,'A'));
	for(itr=m.begin();itr!=m.end();itr++)
	{
		cout<<itr->first<<"\t"<<itr->second<<endl;
	}
}
