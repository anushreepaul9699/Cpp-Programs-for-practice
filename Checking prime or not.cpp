#include<iostream>
using namespace std;
int main()
{
	int m=0,n,i,flag=0;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	m=n/2;
	for(i=2;i<m;i++)
	{
		if(n%i==0)
		{
			cout<<"It is not a prime number";
			flag=1;
			break;
		}
		
}

if(flag==0)
{
	cout<<"It is a prime number ";
}
return 0;

}

