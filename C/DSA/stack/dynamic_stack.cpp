#include <iostream>
#include<climits>
using namespace std; 
class dynamicarray{
    private:
    int *data;
    int capacity;
    int next;
    public:
    dynamicarray()
    {
        data=new int[4];
        next=0;
        capacity=4;
    }
    int size()
    {
        return next;

    }
    bool isempty()
    {
        return next==0;
    }
   void push(int a)
    {
        if(next==capacity)
        {
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            capacity=2*capacity;
            delete []data;
            data=newdata;
        }
        data[next]=a;
        next++;
    }
    int pop()
    {
        if(isempty())
        {
            cout<<"Stack empty"<<endl;
            return 0;
        }
        next--;
        return data[next];
    }
    int top()
    {
        if(isempty())
        {
            cout<<"Stack empty"<<endl;
            return  0;
        }
        return data[next-1];

    }


};
int main()
{
    dynamicarray s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.top()<<endl;
        cout<<s.isempty()<<endl;
        cout<<s.size()<<endl;


}