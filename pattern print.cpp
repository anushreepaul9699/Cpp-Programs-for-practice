#include<iostream>
using namespace std;
int main()
{
	int i,j,r,no=0;
	cout<<"Enter the number of rows you want to print "<<endl;
	cin>>r;
	for(i=1;i<=r;i++)
	{
		no++;
			
		for(j=1;j<=i;j++)
		{
			
			cout<<no;
		}
		cout<<"\n";
		
	}
	return 0;
}
