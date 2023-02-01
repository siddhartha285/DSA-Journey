#include<iostream>
#include<climits>
using namespace std;
class stackusingarray{
    private:
    int *data;
    int next;
    int capacity;
    public:
    stackusingarray(int totalsize)
    {
        data=new int[totalsize];
        next=0;
        capacity=totalsize;

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
            cout<<"Stack Full"<<endl;
            return;
        }
        data[next]=a;
        next++;
    }
    int pop()
    {
        if(isempty())
        {
            cout<<"Stack full"<<endl;
            return INT_MIN;
        }
        next--;
        return data[next];
    }
    int top()
    {
        if(isempty())
        {
            cout<<"Stack full"<<endl;
            return INT_MIN;
        }
        return data[next-1];

    }
    };
    int main()
    {
        stackusingarray s(5);
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.top()<<endl;
        cout<<s.isempty()<<endl;
        cout<<s.size()<<endl;

    }