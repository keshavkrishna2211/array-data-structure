//time : thitha(n)
//aux space :thitha(1)
#include<iostream>
#include<cmath>
using namespace std;
void reverse(int arr[], int low , int high)
{
	while(low<high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
	
	}
}
void leftR(int arr[], int n ,int d)
{
	reverse(arr, 0, d-1);//reverse first d-1 elements
	reverse(arr,d,n-1);//reverse rest of the elements
	reverse(arr,0,n-1);//reverse the whole array
}
int main()
{
	int arr[]={1,2,3,4,5},d=2,n=5;
		cout<<"after rotation"<<endl;
		leftR( arr,  n , d);
			for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
}
