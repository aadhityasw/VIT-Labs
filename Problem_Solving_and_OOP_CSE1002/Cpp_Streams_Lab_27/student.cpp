#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    public :
    double cgpa;
    string regno,name,course;
};
int main()
{
    ifstream fin;
    fin.open("2Apr2.txt",ios ::in);
    Student ob[20];
    int i=0,j,cho,sizes=0;
    while(!fin.eof())
    {
        fin>>ob[i].regno>>ob[i].name>>ob[i].course>>ob[i].cgpa;
        i++;
        sizes++;
    }
    
    cout<<"Enter your choice :- \n1)Get the details through the name of the student.\n2)Get the details through the Registration number of the student.";
    cin>>cho;
    if(cho==2)
    {
        string regno;
        cin>>regno;
        for(i=0;i<sizes;i++)
        {
            if(!ob[i].regno.compare(regno))
            {
                cout<<"The details of the student are :- "<<ob[i].name<<"\t"<<ob[i].regno<<"\t"<<ob[i].course<<"\t"<<ob[i].cgpa<<endl;
            }
        }
    }
    else if (cho==1)
    {
        string names;
        cin>>names;
        for(i=0;i<sizes;i++)
        {
            if(!ob[i].name.compare(names))
            {
                cout<<"The details of the student are :- "<<ob[i].name<<"\t"<<ob[i].regno<<"\t"<<ob[i].course<<"\t"<<ob[i].cgpa<<endl;
            }
        }
    }
    Student ob1;
    for(i=0;i<sizes-1;i++)
    {
        for(j=0;j<sizes-1-i;j++)
        {
            if(ob[j].cgpa>ob[i].cgpa)
            {
                ob1 = ob[i];
                ob[i] = ob[j];
                ob[j] = ob1;
            }
        }
    }
    ofstream f2;
    f2.open("Student1.txt",ios :: out);
    for(i=0;i<sizes;i++)
    {
        f2<<ob[i].name<<"\t"<<ob[i].regno<<"\t"<<ob[i].course<<"\t"<<ob[i].cgpa<<endl;
    }
    f2.close();
    fin.close();
}
