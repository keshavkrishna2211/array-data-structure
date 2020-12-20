#include<iostream>
#include<cmath>
using namespace std;
int DeleteDubSort(int arr[], int n)
{
	int temp[n];
	temp[0]=temp[0];
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res-1]!=arr[i])
		{ 
		temp[res]=arr[i];
		res++;
		}
	}//cpmlexity thitha(n)
	for(int i=0;i<res;i++)
	{
		arr[i]=temp[i];//complexity O(n)
	}

	return res;
}
int main()
{
	int arr[]={10,20,30,30,30};
	cout<<DeleteDubSort( arr,5);
}
