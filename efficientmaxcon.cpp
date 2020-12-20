#include<iostream>
#include<cmath>
using namespace std;
int maxcon1(int arr[], int n)
{
	int res =0;
		int curr=0;
	for(int i=0;i<n;i++)
	{
	
		if(arr[i]==0)
		{
			curr=0;
		}
		else
		{
			curr++;
			res=max(res,curr);
		}

	}
	 return res;
}
int main()
{
	int arr[]={0,1,1,0,1,1,1},n=7;
	cout<<maxcon1(arr,n);
}

