#include<iostream>
#include<cmath>
using namespace std;
int SecondLargest(int arr[], int n)
{
	int res=-1,largest=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[largest])
		{   res=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest])
		{
			if(res==-1||arr[i]>arr[res])
			{
				res=i;
			}
		}
	}
	return res;
}
int main()
{
	int arr[]={3,7,5,6};
	cout<<SecondLargest(arr,4);
}
