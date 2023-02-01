#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float u,v,a,s,d;
	cout<<"Enter value of u,v,a,s:"<<endl;
	cin>>u>>v>>a>>s;
	d=sqrt((a-u)*(a-u)+(s-v)*(s-v));
	cout<<"Distance is: "<<d;
	return 0;
	
}

	   	
	
