#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,pa,pb,n;
	float ra,rb,popa,popb,fa,fb;
	cout<<"enter the pop of town a";
	cin>>pa;
	cout<<"enter the pop of town b";
	cin>>pb;
cout<<"enter the pop rate of town a in %";
	cin>>ra;
	cout<<"enter the pop rate of town b in %";
	cin>>rb;
	popa=(1+ra/100);
	popb=(1+rb/100);
	
	for(n=1;n<=100;n++)
	{
	fa=pow(popa,n);	
	fb=pow(popb,n);	
	a=pa*fa;
	b=pb*fb;
	if(a>=b)
	{
		cout<<"population of town a and b become equal of a become greater after"<<n<<"years"<<endl;
		cout<<"population of town a  after"<<n<<"years="<<a<<endl;
		cout<<"population of town  b after"<<n<<"years="<<b;
	break;	
	}
}
return 0;

}
