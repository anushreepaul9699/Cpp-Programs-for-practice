#include<iostream>
using namespace std;
int main()
{
	int i,j,r;
	cout<<"Enter the number of rows you want to print ";
	cin>>r;
	char ch='A';
	for(i=1;i<=r;i++)
	{
		
			
		for(j=1;j<=i;j++)
		{
			
			cout<<ch;
			ch++;
		}
		cout<<"\n";
		ch='A';
		
	}
	return 0;
}
