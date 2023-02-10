//variables in c++
//int char string bool  double
//type variableName = value;
#include<iostream>
using namespace std;
main()
{
	int age=20;
	string name="robin";
	double marks=2.0;
	cout<<name<<endl<<age<<endl<<marks<<endl;
	int robin= 'a';
	cout<<robin<<endl;
	
	
	//size of data types = premitive data types
	
	cout<<"size of int "<<sizeof(name)<<endl;
	
	cout<<"size of double "<<sizeof(marks)<<endl;
	
	char h='r';
	cout<<"size of char "<<sizeof(h)<<endl;
	
	float b;
	cout<<"size of float "<<sizeof(b)<<endl;
	bool d;
	cout<<"size of bool "<<sizeof(d)<<endl;
	
	
	int x;
	cout<<"sizes of int "<<sizeof(x)<<endl;
	
	short int si;
	long int li;
	
	cout<<endl<<"size of short int "<<sizeof(si)<<endl;
	
	cout<<"size of  long int "<<sizeof(li)<<endl;
}
