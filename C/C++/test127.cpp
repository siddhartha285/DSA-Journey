#include<iostream>
using namespace std;

    template <class t>
    t sum(t a, t b)
    {
        return a+b;
    }
    int main()
    {
        cout<<sum(3,4);
        cout<<endl<<sum(3.4f,3.5f);

    
    return 0;
    }
