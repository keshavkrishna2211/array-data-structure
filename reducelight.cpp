#include<iostream>
using namespace std;
int reducelight(int arr[] ,int n)
{ int i=0, sum=0;
  while(arr[i]!=0)
  {
  	arr[i]=arr[i]-1;
  	++i;
  	
  	
  }
  for(int i=0;i<n ;i++)
  {
  	cout<<arr[i];
  }
   
	
}
	


int main()
{
	int arr[]={1,1,2},n=3;
	reducelight(arr,n);
	
}
