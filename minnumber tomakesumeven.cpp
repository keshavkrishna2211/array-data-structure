#include<iostream>
#include<cmath>
using namespace std;
int minV(int arr[],int n)
{int sum=0,s=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	if(sum%2==0)
	{
		s=2;
	}
	else if(sum%2!=0){
		while(sum%2!=0)
		{   sum++;
			s++;
		}
	
		
	}
	cout<<s;
}
int main()
{
	int arr[]={1,2,24},n=3;
	minV(arr,n);
	
}
