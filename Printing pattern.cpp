#include<iostream>
using namespace std;
int main()
{
	int i,j,r;
	cout<<"Enter the number of rows you want to print "<<endl;
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<"\n";
		
	}
	return 0;
}
