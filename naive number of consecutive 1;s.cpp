#include<iostream>
#include<cmath>
using namespace std;
int con1(int arr[], int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int curr=0;
		for(int j=i+1;i<n;i++)
		{
			if(arr[i]==arr[j])
			{
				curr++;
			}
			else
			{
				break;
			}
		}
      		res=max(res,curr);
	}
	cout<<res;
}
int main()
{
	int arr[]={1,0,0,1,1,1,0},n=7;
	con1(arr,n);
}
