#include<iostream>
#include<cmath>
using namespace std;
int largestE(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		bool flag=true;
		for(int j=0;j<n;j++)
		{
			if( arr[j]>arr[i])
			{
		 flag=false;
			break;
			}
		}
		if(flag==true)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={3,4,6,5};
	cout<<largestE(arr,4);
	
}

