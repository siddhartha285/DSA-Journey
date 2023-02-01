#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l=0,int b=0)
    {
        length=l;
        breadth=b;
    }
    void setlength(int l);
    void setbreadth(int b);
    int getlength();
    int getbreadth();
    int area();
    int perimeter();
};
class cuboid:public rectangle
{
    private:
    int height;
    public:
    cuboid(int l=0,int b=0,int h=0):rectangle(l,b)
    {
      
        height=h;
    }
    void setheight(int h);
    int getheight();
    int volume();

};
void rectangle::setlength(int l)
{
    length=l;
}
void rectangle::setbreadth(int b)
{
    breadth=b;
}
int rectangle::getlength()
{
    return length;
}
int rectangle::getbreadth()
{
    return breadth;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return (length+breadth)*2;
}
void cuboid::setheight(int h)
{
    height=h;
}
int cuboid::getheight()
{
    return height;
}
int cuboid::volume()
{
    return area()*height;
}
int main()
{
    
    cuboid r2(1,2,3);
    cout<<r2.area();
    cout<<endl<<r2.perimeter()<<endl;
 
    cout<<r2.volume();

}