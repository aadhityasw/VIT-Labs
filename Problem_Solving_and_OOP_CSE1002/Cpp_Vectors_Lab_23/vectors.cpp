#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int cho;
	do
	{
		cout<<"Options :-\n1)Insert element\n2)Delete element at position\n3)size\n4)Print the elements\n5)Print in reverse order\n6)Capacity\n7)Max Size\n8)exit";
		cin>>cho;
		vector<int> g1;
		vector<int>::iterator i;
		vector<int>::reverse_iterator it;
		switch(cho)
		{
			case 1:
				int no;
				cin>>no;
				g1.push_back(no);
				break;
			case 2 :
				int pos;
				cout<<"Enter the position :-  ";
				i=g1.begin();
				i+=pos;
				g1.erase(i);
				break;
			case 3 :
				cout<<"Size "<<g1.size();
				break;
			case 4 :
				for(i=g1.begin();i!=g1.end();i++)
				{
					cout<<*i<<"\t";
				}
				cout<<endl;
				break;
			case 5 :
				for(it=g1.rbegin();it!=g1.rend();it++)
				{
					cout<<*it<<"\t";
				}
				cout<<endl;
				break;
			case 6 :
				cout<<"Capacity :- "<<g1.capacity()<<endl;
				break;
			case 7 :
				cout<<"Max_Size "<<g1.max_size()<<endl;
				break;
		}
	}while(cho!=7);
	cout<<g1.clear()<<endl;
	cout<<"Size "<<g1.size()<<endl;
}
