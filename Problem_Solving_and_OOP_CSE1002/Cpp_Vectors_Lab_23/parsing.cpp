#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> g1;
	vector<int>::iterator i;
	vector<int>::reverse_iterator it;
	for(int i=0;i<5;i++)
	{
		g1.push_back(i);
	}
	for(i=g1.begin();i!=g1.end();i++)
	{
		cout<<*i<<"\t";
	}
	cout<<endl;
	for(it=g1.rbegin();it!=g1.rend();it++)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
	for(i=g1.end();i!=g1.begin();i--)
	{
		cout<<*i<<"\t";
	}
	cout<<endl;
	cout<<"Size "<<g1.size();
	cout<<endl;
	cout<<"Capacity "<<g1.max_size()<<endl;
	cout<<g1.capacity()<<endl;
	bool a = g1.empty();
	cout<<a<<endl;
	cout<<"element at pos 3 - "<<g1.at(3)<<endl;
	cout<<"element at front "<<g1.front()<<endl;
	cout<<"element at back "<<g1.back()<<endl;
	cout<<"element at pos 4 - "<<g1[4]<<endl;
	g1.resize(10);
	cout<<"Size "<<g1.size()<<endl;
	i=g1.begin();
	g1.erase(i,i+2);
	cout<<"Size "<<g1.size()<<endl;
}
