#include <iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;
    public:
    Complex(int x=0,int y=0)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<real<<"+i"<<img;
    }
    friend ostream & operator <<(ostream &out, Complex &c);
};
ostream & operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}
int main()
{
    Complex c1(3,4);
    cout<<c1;
    cout<<"10";

    
}