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
    rectangle *p=new rectangle;
    p->length=10;
    p->breadth=5;
    cout<<p->area();
    cout<<endl;
    cout<<p->perimeter();
    return 0;

}