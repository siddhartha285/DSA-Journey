#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return (length+breadth)*2;
    }
};
int main()
{
    rectangle r1;
    rectangle *p;
    p=&r1;
    p->length=5;
    p->breadth=10;
    cout<<p->area();
    return 0;
}