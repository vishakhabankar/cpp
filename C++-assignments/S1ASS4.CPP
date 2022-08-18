//Read a number to check it is palindrom or not
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,temp;
	cout<<endl;
	cout<<"Enter the number : ";
	cin>>n;
	temp=n;
	int r,sum=0;
	while(n>0)
	{
	   r=n%10;
	   sum=sum*10+r;
	   n=n/10;
	}
	cout<<endl;

	if(sum==temp)
	   cout<<temp<<" "<<"is a palindrom"<<endl;
	else
	   cout<<temp<<" "<<"is not a palindom"<<endl;
      getch();
}