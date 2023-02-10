//creating a simple calculator using c++


#include<iostream>
using namespace std;
main()
{
//	declear varibles
	
	int x,y,add,mul,sub;
	double mod,div;
	cout<<"enter your firt number :";
	cin>>x;
	cout<<"enter yuor 2nd number : ";
	cin>>y;
	
	
//	assign maths to our varibles
	
	add = x+y;
	mul= x*y;
	sub = x-y;
	mod = x%y;
	div = x/y;
	
//	print output
	
	cout<<endl;
	cout<<x<<"+"<<y<<"="<<add<<endl;
	cout<<x<<"*"<<y<<"="<<mul<<endl;
	cout<<x<<"-"<<y<<"="<<sub<<endl;
	cout<<x<<"%"<<y<<"="<<mod<<endl;
	cout<<x<<"/"<<y<<"="<<div<<endl;
} 
