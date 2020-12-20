#include<iostream>
#include<cmath>
using namespace std;
int sortedArr(int arr[],int n)
{   
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
			cout<<"false";
			return false;
				
			}
		}
	}
return true;
	
}
int main()
{
	int arr[]={1,2,3,4};
	cout<<sortedArr(arr,4);
}
