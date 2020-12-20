#include<iostream>
#include<cmath>
using namespace std;
void MoveZeroesToEnd(int arr[], int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		
		}
	}
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
	cout<<"after moving zeroes to the end";
	MoveZeroesToEnd(arr,n);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
