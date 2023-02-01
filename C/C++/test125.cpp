#include<iostream>
using namespace std;

    int sum(int a=0,int b=0, int c=0, int d=0)
    {
        int s=a+b+c+d;
        return s;
    }
    int main()
    {
        int w,x,y,z;
         w=sum(4,5);
        cout<<w;
        return 0;
    }
