#include<iostream>
using namespace std;
template<typename T,typename V>
class Pair{
    private:
    T x;
    V y;
    public:
    void setx(T x)
    {
        this->x=x;
    }
    void sety(V y)
    {
        this->y=y;
    }
    T getx()
    {
        return x;
    }
    V gety()
    {
        return y;
    }

};
int main(){
    Pair<int,double> p1;
    Pair<Pair<int, double>,char> p2;
    Pair<int,double> p3;
    p3.setx(9);
    p3.sety(10.001);
    p2.setx(p3);
    p2.sety('c');
    p1.setx(10);
    p1.sety(20.98989);
    cout<<p1.getx()<<" " <<p1.gety()<<endl;
    cout<<p2.getx().getx()<<" "<<p2.getx().gety()<<" "<<p2.gety();

}