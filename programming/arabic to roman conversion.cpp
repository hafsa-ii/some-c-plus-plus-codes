#include<iostream>
using namespace std;
int main()
{
	int year,x,y,z,n,a,b,c,d;
	cout<<"enter year between 1000 and  3000";
	cin>>year;
	x=year%10;
	y=year/10;
	z=y%10;
	n=y/10;
	a=n%10;
	b=n/10;
	c=b%10;
	if(c==1)
	cout<<"M";
	if(c==2)
	cout<<"MM";
	switch(a)
	
{
	case 0 : cout<<" ";
	        break;
   case 1 : cout<<"C ";
	        break;
			 	case 2 : cout<<"CC ";
	        break;
	   	case 3 : cout<<"CCC ";
	        break;     
	   	case 4 : cout<<"CD ";
	        break;  
		case 5 : cout<<" D";
	        break;
			case 6 : cout<<" DCC";
	        break;	
		case 7 : cout<<" DCCC";
	        break;	
			case 8 : cout<<"CM ";
	        break;	
				case 9 : cout<<"CM ";
	        break;
	default: cout<<"invalid";
						   

}


	switch(z)
	
{
	case 0 : cout<<" ";
	        break;
		case 1 : cout<<"X ";
	        break;
	        	case 2 : cout<<"XX ";
	        break;
	   	case 3 : cout<<"XXX ";
	        break;     
	   	case 4 : cout<<"XL ";
	        break;  
		case 5 : cout<<" L";
	        break;
			case 6 : cout<<" LX";
	        break;	
		case 7 : cout<<" LXX";
	        break;	
			case 8 : cout<<"LXXX ";
	        break;	
				case 9 : cout<<"XC ";
	        break;
	default: cout<<"invalid";
						   

}
	switch(x)
	
{
	case 0 : cout<<" ";
	        break;
		case 1 : cout<<"I ";
	        break;
	        	case 2 : cout<<"II ";
	        break;
	   	case 3 : cout<<"III ";
	        break;     
	   	case 4 : cout<<"IV ";
	        break;  
		case 5 : cout<<" V";
	        break;
			case 6 : cout<<" VI";
	        break;	
		case 7 : cout<<" VII";
	        break;	
			case 8 : cout<<"VIII ";
	        break;	
				case 9 : cout<<"IX ";
	        break;
	default: cout<<"invalid";
						   

}
return 0;
}

