#include<iostream>
#include<cmath>
using namespace std;
void reverse(int arr[], int n)
{
	int low=0,high=n-1;
	while(low<high)
	{
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
int main()
{
	int arr[]={1,6,3,4},n=4;
	cout<<"after reverse:";
	reverse(arr,n);
	for(int i=0;i<n;i++)
	{cout<<arr[i];
	}
}
