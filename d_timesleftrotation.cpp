//thith(n):time complexity
//thitha(d):aux space
#include<iostream>
#include<cmath>
using namespace std;
int DleftRotate(int arr[],int n ,int d)
{
	int temp[d];
	for(int i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	for(int i=d;i<n;i++)
	{
		arr[i-d]=arr[i];
	}
	for(int i=0;i<d;i++)
	{
		arr[n-d+i]=temp[i];
	}
}
int main()
{
		int arr[]={1,2,3,4,5},d=3,n=5;
		cout<<"after rotation"<<endl;
		DleftRotate( arr,5 ,3);
		
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	
		
}

