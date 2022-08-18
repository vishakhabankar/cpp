//Read a number and check prime or not
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<endl;
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int flag=0;
	for(int i=2;i<n;i++)
	{
	   if(n%i==0)
	     flag=1;
	}
	cout<<endl;
	if(flag==0)
	   cout<<n<<" "<<"is a Prime number"<<endl;
	else
	   cout<<n<<" "<<"is not a Prime number"<<endl;
	getch();
}