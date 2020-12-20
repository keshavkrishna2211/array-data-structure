#include<iostream>
#include<cmath>
using namespace std;
int frequency(int arr[], int n)
{
	int i=1, freq=1;
	while(i<n)
	{
		while(i<n&&arr[i]==arr[i-1])
		{
			i++;
			freq++;
		}
		cout<<arr[i-1]<<""<<freq<<endl;
		i++;
		freq=1;
		
	}
}
int main()
{
	int arr[]={10,10,20,30,30,30},n=6;
	frequency(arr,n);
}
