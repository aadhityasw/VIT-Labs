#include<iostream>
#include<stdlib.h>
using namespace std;
void * operator new(size_t n)
{
	cout<<"new operator overloaded"<<endl;
	void* ptr;
	ptr=malloc(n);
	return(ptr);
}
void operator delete(void* p)
{
	cout<<"delete operator overloaded"<<endl;
	free(p);
}
int main()
{
	int *p = new(int);
	*p=10;
	cout<<*p<<endl;
	delete p;
}
