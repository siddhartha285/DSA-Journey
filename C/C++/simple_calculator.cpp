#include <iostream>
using namespace std;
int main()
    {
        int a,b,c,add,mul,sub,div;
        cout<<"Enter 2 numbers:"<<endl;
        cin>>a>>b;
        cout<<"Choose 1:add  2:sub 3:mul 4:div"<<endl;
        cin>>c;
        if(c==1)
            cout<<a+b<<endl;

        else if(c==2)
         cout<<a-b<<endl;
        else if(c==3)
        
            cout<<a*b<<endl;

        
        else if(c==4) 
            if(b==0)
            cout<<"Infinity";
            else
            cout<<(float)a/b;
        return 0;


    }