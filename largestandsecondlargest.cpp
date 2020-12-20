#include<iostream>
#include<cmath>
using namespace std;
int largestandSecondLargest(int arr[],int n)
{ int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[res])
		{
		  res=i;
		}
	}
	cout<<arr[res];
	int re=-1,largest=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[largest])
		{   re=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest])
		{
			if(res==-1||arr[i]>arr[re])
			{
				re=i;
			}
		}
	}
	cout<<arr[re];
	
}
int main()
{
	int arr[]={3,7,5,6};
	largestandSecondLargest(arr,4);
}
