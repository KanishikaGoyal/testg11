#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	float r1,r2;
	std::cout<<"enter the coefficient of x square->"<<endl;
	std::cin>>a;
	std::cout<<"enter the coefficient of x->"<<endl;
	std::cin>>b;
	std::cout<<"enter quatratic constant->"<<endl;
	std::cin>>c;
	r1=(-b+(sqrt((b*b-4*a*c)))/2*a);
	r2=(-b-(sqrt((b*b-4*a*c)))/2*a);
	std::cout<<"roots of equation are "<<r1<<"  and "<<r2;
	return(0);
	
}
