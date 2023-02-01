#include<iostream>
using namespace std;
class Complex
{
   private:
    int real;
    int imaginary;
    public:
    Complex(int x=0,int y=0)
    {
        real=x;
        imaginary=y;
    }
    void display()
    {
        cout<<real<<"+i"<<imaginary;
    }
    friend Complex operator+(Complex x, Complex y);
};
Complex operator+(Complex x,Complex y)
{
    Complex temp;
    temp.real=x.real+y.real;
    temp.imaginary=x.imaginary+y.imaginary;
    return temp;
}
int main()
{
    Complex c1(3,4),c2(4,5),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
