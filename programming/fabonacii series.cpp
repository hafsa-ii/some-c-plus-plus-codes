#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int f=0,next,s=1,n,i;
	for(n=0;n<=13;n++)
	{
		if(n<=1)
		{
			next=n;
		}
		else
		{
			next=f+s;
			f=s;
			s=next;
		}
		cout<<next<<" ";
	}
	return 0;
	
	
}
