#include<iostream>
using namespace std;
int main()
{
	int cost,w;
	char place;
	cout<<"enter the weight";
	cin>>w;
	cout<<"enter a place you want to send parcel outside country or inside ? c:o";
	cin>>place;
	if(place=='c')
	{
	cost=20*2*w;
	cout<<"cost is "<<cost<<"$";
		
	}
	else
	{
	cost=40*2*w;
	cout<<"cost is "<<cost<<"$";
		
	}
	return 0;
	
	}
