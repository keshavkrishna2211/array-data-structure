#include<iostream>
#include<cmath>
using namespace std;
int sortedArr(int arr[],int n)
{
	for(int i=1; i<n ;i++)
	{
		if(arr[i]<arr[i-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int arr[]={1,6,3,4};
	cout<<sortedArr(arr,4);
}
