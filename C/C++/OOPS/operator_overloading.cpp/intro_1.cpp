#include<iostream>
using namespace std;
class Complex
{
    public:
    int real;
    int imaginary;
    public:
    Complex add(Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.imaginary=imaginary+x.imaginary;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c;
    c1.real=5;
    c1.imaginary=10;
    c2.real=6;
    c2.imaginary=11;
    c=c1.add(c2);
    cout<<c.real<<"+ i"<<c.imaginary;
}