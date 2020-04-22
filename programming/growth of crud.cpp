#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int f=0,next,s=1,n,i;
	int isize,t,count=0;
	cout<<"enter the initial size";
	cin>>isize;
	cout<<"enter days";
	cin>>t;
	for(n=0;n<=13;n++)
	{
	
		
			next=f+s;
			f=s;
			s=next;
		count=count+t;
		cout<<"In"<<" "<<count<<" "<<"days"<<" "<<next*isize<<" "<<"pounds"<<endl;;
	}
	return 0;
	
	
}
