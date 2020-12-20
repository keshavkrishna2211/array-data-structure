#include<iostream>
#include<cmath>
using namespace std;
int largestE(int arr[],int n)
{ int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[res])
		{
		  res=i;
		}
	}
	return res;
	
}
int main()
{
	int arr[]={3,7,5,6};
	cout<<largestE(arr,4);
	
}

