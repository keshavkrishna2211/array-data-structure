#include<iostream>
#include<cmath>
using namespace std;
int convertFive(int n) {
    int count=1,num=0,rem,res;
    while(n!=0)
    {res=n/10;
        rem=n%10;
        if(rem==0)
        {
            num=num+count*5;
        }
        else
        {
            num=num+rem*count;
        }
        count=count*10;
        n=n/10;
    }
    return(num);
}
int main()
{
	int n=1004;
	cout<<convertFive(n);
}
