#include<iostream>
using namespace std;
int main()
{
	int r,s,p;
	cout<<"Enter the number of row : "<<endl;
	cin>>r;
	for(int i =0;i<r;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
