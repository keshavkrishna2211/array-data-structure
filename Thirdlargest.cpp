#include<iostream>
#include<cmath>
using namespace std;
int ThirdLargest(int arr[], int n)

{ if (n<3)
{
	cout<<"invalid input";

}
	int first =0 ,second =INT_MIN , third=INT_MIN;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[first])
		{
			third=second;
			second=first;
			
			first=i;
		}
		else if(arr[i]>arr[second])
		{
			third=second;
			second=i;
		}
		else if(arr[i]>arr[third])
		{
			third=i;
		}
	
	}
	return arr[third];
}
int main()
{
	int arr[]={3,2,1};
	cout<<ThirdLargest(arr,3);
}
