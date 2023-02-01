#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int getlength();
    int getbreadth();
    void setlength(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
    bool is_square();
    ~rectangle();
   

};
int main()
{
    rectangle r(5,10);
    cout<<r.getlength();
    cout<<endl<<r.getbreadth();
    cout<<endl<<r.area()<<endl;
    
    return 0;
}

 rectangle::rectangle()
 {
    length=1;
    breadth=1;
 }
 rectangle::rectangle(int l,int b)
 {
    length=l;
    breadth=b;
 }
 rectangle::rectangle(rectangle &r)
 {
    length=r.length;
    breadth=r.breadth;
 }
 int rectangle::getlength()
 {
    return length;
 }
 int rectangle::getbreadth()
 {
    return breadth;
 }
 void rectangle::setlength(int l)
 {
    length=l;
 }
 void rectangle::setbreadth(int b)
 {
    breadth=b;
 }
 int rectangle::area()
 {
    return length*breadth;
 }
 int rectangle::perimeter()
 {
    return 2*(length+breadth);
 }
 bool rectangle::is_square()
 {
    return length==breadth;
 }
 rectangle::~rectangle()
 {
    cout<<"Class destroyed.";
 }
