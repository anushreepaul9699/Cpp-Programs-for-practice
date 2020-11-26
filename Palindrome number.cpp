#include<iostream>
using namespace std;
int main()
{
	int sum=0,n,r,temp;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	temp=n;
	while (n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==temp)
	{
		cout<<"It is a palindrome number "<<endl;
		
	}
	else
	{
		cout<<"It is not a palindrome number "<<endl;
	}
	return 0;
}
