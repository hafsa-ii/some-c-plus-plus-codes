#include<iostream>
using namespace std;
int main()
{
	int n,odd=0,even=0;
 
	for(n=1;n<=20;n++)
	{
	if(n%2==0)	
	{
		even=even+n;
	}
		
		else	
	{
		odd=odd+n;
	}
		
	}
		cout<<"sum of even number is"<<"  "<<even<<endl;
		cout<<"sum of odd number is"<<"  "<<odd<<endl;
	return 0;
}
