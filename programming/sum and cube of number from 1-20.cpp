#include<iostream>
using namespace std;
int main()
{
	int n,cube,square;
 
	for(n=1;n<=20;n++)
	{
	if(n%2==0)	
	{
		square=n*n;
	cout<<"square of"<<"  "<<n<<"="<<" "<<square<<endl;
		cube=n*n*n;
	cout<<"cube of"<<"  "<<n<<"="<<" "<<cube<<endl;
	}
		
	}
		
	return 0;
}
