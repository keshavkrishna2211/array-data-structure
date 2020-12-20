#include<iostream>
#include<cmath>
using namespace std;
int deleteE(int arr[], int n,int x)
{int i;
	
	for( i=0; i<=n;i++)
	{
		if(arr[i]==x)
		{
			break;
		}
		else if(i==n)
		{
			return n;
		}

	}
		for(int j=i;j<n-1;j++)
	{
		arr[j]=arr[j+1];
	}
	return n-1;
	
	
	

	
}
int main()
{
	int arr[]={1,2,3,4,6,0,0},x=4,n=6;
	 cout<<"before deletion"<<endl;
	for(int i=0;i<=n;i++)
   {
   	cout<<arr[i]<<"\n";
   }
   cout<<endl;
   cout<<"after deletion"<<endl;
	
   n=deleteE(arr,n,x);
  
   
	
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<"\n";
	}
}
