//O(n2)
#include<iostream>
#include<cmath>
using namespace std;
int Leader(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
	bool flag=false;
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]<=arr[j])
		{
		 flag =true;
		 break;
		}
	
	}
	if(flag==false)
	{
		cout<<arr[i];
	}
	}
}
int main()
{
	int arr[]={3,4,2,1};
	Leader(arr,4);
	
}
