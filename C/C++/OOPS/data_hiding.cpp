#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:

    void setlength(int x)
    {
      while(x<0)
      {
        cout<<"Length cannot be negative. Please enter another value.: ";
        cin>>x;
      }
      length=x;

    }
    void setbreadth(int y)
    {
        if(y>=0)
        {
        breadth=y;
        }
        else
        {
        cout<<"Breadth cannot be negative. Breadth setting default to 0"<<endl;
        breadth=0;
        }
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth ;
    }
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
    r1.setlength(-6);
    r1.setbreadth(6);
    cout<<"Length: "<<r1.getlength()<<endl;
    cout<<"Breadth: "<<r1.getbreadth()<<endl;
    cout<<"Area: "<<r1.area()<<endl;
    
    return 0;

}