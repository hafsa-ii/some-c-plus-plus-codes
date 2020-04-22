#include<iostream>
using namespace std;
int main()
{
	int n,score,obt,total;
	double p,sum=0,sum1=0;
	cout<<"enter the number of excercises"<<endl;
	cin>>n;
for(int k=1;k<=n;k++)

	{
		cout<<"enter total marks of ex"<<k<<" ";
	cin>>total;
			cout<<"enter obtained marks of ex"<<k<<" ";
	cin>>obt;
	cout<<"score recieved for exercise "<<" "<<k<<":"<<obt<<endl;
	cout<<"score possible for exercise "<<" "<<k<<":"<<total<<endl;
	sum=sum+obt;
	sum1=sum1+total;	
	}
p=(sum/sum1)*100;
cout<<"your total is"<<sum<<"out of"<<sum1<<"or"<<p<<" "<<"%";
	return 0;
	
}
