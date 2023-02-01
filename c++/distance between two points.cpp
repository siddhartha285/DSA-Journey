#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1,x2,y1,y2,d;
	cout<<"Enter value of u,v,a,s:"<<endl;
	cin>>x1>>x2>>y1>>y2;
	d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	cout<<"Distance is: "<<d;
	return 0;
	
}
