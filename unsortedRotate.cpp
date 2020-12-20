#include <iostream>
#include <cmath>
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


void leftRotate(int arr[], int d, int n)
{
reverse(arr, 0, d-1);//reverse first d-1 elements
	reverse(arr,d,n-1);//reverse rest of the elements
	reverse(arr,0,n-1);
}
    
int main() {
	
      int T;
      cin>>T;
    
      int n;
      int arr[n],d;
      
      
      while(T--)
      {cin>>n;
      cin>>d;
      
      
      	for(int i=0;i<n;i++)
      	{
      		cin>>arr[i];
		  }
		  	
	  }
	  cout<<"/n";
	 
	  
    return 0;
}
//not solved

