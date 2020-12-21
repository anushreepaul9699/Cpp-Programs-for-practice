#include<iostream>
using namespace std;
int main()
{
	int ar[10]={ 1,3,5,7,8,9};
	int i,n,j,found,item;
	cout<<"Enter the number of elements of an array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Arr["<<i<<"]"<<"="<<ar[i]<<endl;
		
		
	}
	cout<<"Enter the element to be deleted : ";
	cin>>item;
	
  for(i=0; i<n; i++)
    {
        if(ar[i]==item)
        {
            for(j=i; j<(n-1); j++)
                ar[j] = ar[j+1];
            found=1;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
    {
        cout<<"\nElement Deleted Successfully!";
        cout<<"\n\nThe New Array is:\n";
        for(i=0; i<n; i++)
            cout<<ar[i]<<"  ";
    }	

	
	return 0;
}
