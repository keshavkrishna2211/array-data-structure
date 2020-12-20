#include<iostream>
#include<cmath>
using namespace std;
int sum(int arr[], int n)
{int sum=0;
	for(int i=0;i<n;i++)
	{
	sum=sum+arr[i];	
	}
	cout<<sum;
}
int main()
{
	int arr[]={1,2,3},n=3;
	sum(arr,n);
	
}
