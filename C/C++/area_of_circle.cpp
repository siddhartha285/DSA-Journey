
#include <iostream>
using namespace std;
typedef int radius;
int main()
{
	radius r;
    float area;
	cout<<"Enter radius of circle:"<<endl;
	cin>>r;
    area=3.14f*r*r;
	cout<<"Area of circle is: "<<area<<endl;
	return 0;
}