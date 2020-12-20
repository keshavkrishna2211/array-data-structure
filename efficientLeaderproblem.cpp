//O(n)
#include<iostream>
#include<cmath>
using namespace std;
int Leader(int arr[], int n)
{
	int currn_leader=arr[n-1];
	cout<<currn_leader;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>currn_leader){
			currn_leader=arr[i];
			cout<<currn_leader;
		}
	}
}
int reverse(int ar[],int k)
{
	int low=0,high=k-1;
	while(low<high)
	{
		int temp=ar[low];
		ar[low]=ar[high];
		ar[high]=temp;
		low++;
		high--;
	}

}
int main()
{
	int arr[]={3,4,2,1},n=4;

	
	
		
		
		
		Leader(arr,n);
		
	
	
}
