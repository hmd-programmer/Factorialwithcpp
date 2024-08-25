#include<iostream>
#include<conio.h>
using namespace std;
main()
{

	long int i,n,Factorial;
	Factorial=1;
	cout<<"Factorial : ";
	cin>>n;
	
	   for(i=1;i<=n;i++)
	   {
	   	Factorial=Factorial*i;	   	
	   }
	cout<<"Factorial "<<n<<"  or "<<n<<"! = "<<Factorial;
	
	getch();
	return 0;
}