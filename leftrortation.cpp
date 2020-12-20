#include<iostream>
#include<cmath>
using namespace std;
int LeftRotate(int arr[], int n)
{ int temp=arr[0];
	for(int i=0;i<n;i++)
	{
	
		
			arr[i-1]=arr[i];
		
		
	}
	arr[n-1]=temp;
}
int main()
{
	cout<<"no. of elements in array:";
	int n;
	int arr[n];
	cin>>n;
	cout<<"elements of arrays: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"after left rotation of array";
	LeftRotate(arr,n);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
