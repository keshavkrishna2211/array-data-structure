#include<iostream>
#include<cmath>
using namespace std;
int largestN(int arr[], int n)
{
	int res =0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[res])
		{ res=i;
		}
	}
	return res;
}
int SecondLargest(int arr[],int n)
{ int largest=largestN(arr,n);
int re=-1;
	for(int i=0;i<n;i++)
	{if(arr[i]!=arr[largest])
	{if(re==-1)
	{
		re=i;
	}

		else if(arr[i]>arr[re])
		{
			re=i;
		}
	}
	}
	return arr[re];
}
int main()
{
	int arr[]={3,7,5,6};
	cout<<SecondLargest(arr,4);
}
