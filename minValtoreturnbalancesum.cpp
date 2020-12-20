#include<iostream>
using namespace std;
int minValtobalancesum(int arr[], int n)
{
	int sum=0,sum1=0,s=0;
	for(int i=0;i<n/2;i++)
	{
		sum=sum+arr[i];
	}
	
	for(int i=n-1;i>=n/2;i--)
	{
		sum1=sum1+arr[i];
	}
	while(sum!=sum1)
	{   
	if(sum>sum1)
	{
		sum1++;
		s++;
	}
	else if(sum<sum1)
	{
		sum++;
		s++;
		
	}
	}
	cout<<s;
		
}
int main()
{
	int arr[]={1,2,1,2,1,3},n=6;
	minValtobalancesum(arr,n);
	
}
