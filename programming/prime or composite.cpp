#include<iostream>
using namespace std;
int main()
{
	int n,count=0,a;
	cout<<"enter the number";
	cin>>n;
 
	for(a=2;a<=n/2;a++)
	{
	
	if(n%a==0)
{
count=1;
break;	
}
}
if(count==0)
cout<<n<<"is prime number";
else
cout<<n<<"is composite number";

		
	return 0;
}
