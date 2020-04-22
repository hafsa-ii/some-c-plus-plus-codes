#include<iostream>
using namespace std;
int main()
{


	double guess,set_guess,n,r;
	cout<<"enter a number"<<endl;
	cin>>n;
	guess=n/2;
do
	{
		r=n/guess;
		set_guess=guess;
		guess=(guess+r)/2;
		
	}
while(set_guess-guess>0.01*set_guess);	
cout<<"square root"<<"="<<guess;
	return 0;
	
}
