#include<iostream>
using namespace std;
int main()
{
	int sum=0,n,temp,r;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	
	if(sum==temp)
	{
		cout<<"it is a armstrong number";
	}
	else
	{
		cout<<"it is not a armstrong number";
	}
}
