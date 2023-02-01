#include<iostream>
using namespace std;
class rational
{
    private:
    int num;
    int den;
    public:
    rational(int p=0,int q=1)
    {
        num=p;
        den=q;
    }
   friend rational operator+(rational p,rational q);
   friend ostream & operator<<(ostream &out,rational c );
    
    

};
ostream & operator<<(ostream &out,rational c )
    {
        out<<c.num<<"/"<<c.den;
    }
rational operator+(rational p,rational q)
    {
        rational temp;
        temp.num=((p.num*q.den)+(p.den*q.num));
        temp.den=(p.den)*(q.den);
        return temp;
    }

int main()
{
    rational r1(2,3),r2(6,4),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3;
    
}
