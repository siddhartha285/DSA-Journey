#include <iostream>
using namespace std;
template<class t>
t maxim(t a,t b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
   int c=maxim(5,6);
    float d=maxim(5.2f,5.1f);
    cout<<c<<endl<<d;

}

