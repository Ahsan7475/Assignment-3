#include<iostream>
#include <cmath>
using namespace std;
void sum(int a,int b)
{cout<<a+b<<endl;}
void sub(int a,int b)
{cout<<a-b<<endl;}
void prod(int a,int b)
{cout<<a*b<<endl;}
void div(float a,float b)
{cout<<a/b<<endl;}
void remai(int a,int b)
{cout<<a%b<<endl;}
int main()
{
int a,b;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;

cout<<"                             "<<endl;
	cout<<"sum of a and b:          ";
		sum (a,b);
cout<<"                             "<<endl;
	cout<<"subtract of a and b:     ";
		sub (a,b);
cout<<"                             "<<endl;
	cout<<"product of a and b:      ";
		prod (a,b);
cout<<"                             "<<endl;
	cout<<"divide of a and b:       ";
		div (a,b);
cout<<"                             "<<endl;
	cout<<"remainder of a and b:    ";
		remai(a,b);
cout<<"                             "<<endl;
	cout<<"log of a:                ";
		cout<<log(a)<<endl;
cout<<"                             "<<endl;
	cout<<"log of b:                ";
		cout<<log(b)<<endl;
cout<<"                             "<<endl;
	cout<<"square root of a:             ";
		cout<<sqrt(a)<<endl;
cout<<"                             "<<endl;
	cout<<"square root of b:             ";
		cout<<sqrt(b)<<endl;
cout<<"                             "<<endl;
}
