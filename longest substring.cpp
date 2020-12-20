#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int LongestDSubstring(char x[] , int n)
{
	int count =0;
	n=x.size();
	for(int i=0 ;i<n; i++)
	{
		for(int j=1; j<n ;j++)
		{
			if(x[i]==x[j]||x[i]>x[j])
			{
				count++;
				
			}
			else
			{
				break;
			}
		}
	}
	cout<<count;
}
int main()
{
	char x="BBAASSSRPPOCCBAAACBABA";
   int n=x.size();
	LongestDSubstring(x[] ,  n);
	

}
