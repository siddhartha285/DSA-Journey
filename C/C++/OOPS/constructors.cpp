#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle()
    {
       length=0;
       breadth=0;
    }
    rectangle(rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    rectangle(int a,int b)
    {
        setlength(a);
        setbreadth(b);
    }
  
    void setlength(int a)
    {
        while(a<0)
        {
            cout<<"Enter positive length: "; 
            cin>>a;
        }
        length=a;
    }
    void setbreadth(int b)
    {
        while(b<0)
        {
            cout<<"Enter positive breadth: ";
            cin>>b;

        }
        breadth=b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;

    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }


};
int main()
{
    rectangle r(6,5 );
    rectangle r2(r);
    
    cout<<r.area();
    cout<<endl<<r2.area();
    return 0;

}