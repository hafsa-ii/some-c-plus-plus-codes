#include<iostream>
using namespace std;
int main()
{
	int n,m[100],k,i=0,j,x;
	cout<<"Enter a decimal";
	cin>>n;
	for(x=1;x<=9;x++)
	{
		m[i]=n%2;
		k=n/2;
		i++;
		if(n/2==0)
		{
		
		break;
		}
		n=k;
		
	}
	for(j=i-1;j>=0;j--)
	cout<<m[j];
	return 0;
	
}
