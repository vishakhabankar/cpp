//Print all even numbers in the range 0-100, find their sum
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,sum=0;
	for(i=0;i<=100;i++)
	{
	   if(i%2==0)
	   {
	      cout<<i<<endl;
	      sum+=i;
	   }
	}
	cout<<"Sum of even numbers = "<<sum<<endl;
	getch();
}