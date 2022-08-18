//Read any 4 numbers to determine the greatest among them
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<endl;
	int a,b,c,d;
	cout<<"Enter any 4 number : ";
	cin>>a>>b>>c>>d;
	cout<<endl;
	if(a>b & a>c & a>d)
	  cout<<a<<" "<<"is greatest"<<endl;
	else if(b>c & b>d & b>a)
	  cout<<b<<" "<<"is greatest"<<endl;
	else if(c>d & c>a & c>b)
	  cout<<c<<" "<<"is greatest"<<endl;
	else if(d>a & d>b & d>c)
	  cout<<d<<" "<<"is greatest"<<endl;

	getch();
}