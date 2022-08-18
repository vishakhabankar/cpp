//Read name,age to check voting eligibility

#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<endl;
	char nm[10];
	cout<<"Enter your name : ";
	cin>>nm;
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<endl;
	if(age>=18)
	   cout<<nm<<" "<<"is eligible for voting"<<endl;
	else
	   cout<<nm<<" "<<"is not eligible for voting"<<endl;
	getch();
}