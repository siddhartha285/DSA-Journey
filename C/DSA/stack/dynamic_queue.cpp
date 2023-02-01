#include<iostream>
using namespace std;
class Queue
{
    private:
    int size;
    int *data;
    int frontindex;
    int nextindex;
    int capacity;
    public:
    Queue(int a)
    {
        capacity=a;
        data=new int[a];
        frontindex=-1;
        nextindex=0;
        size=0;


    }
    int getsize()
    {
        return size;
    }
    bool isempty()
    {
        return size==0;
    }
    void enqueue(int a)
    {
        if(size==capacity)
        {
            int *newdata=new int[2*capacity];
            int j=0;
            for(int i=frontindex;i<capacity;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            for(int i=0;i<frontindex;i++)
            {
                newdata[j]=data[i];
                j++;
            }
            delete [] data;
            data=newdata;
            nextindex=capacity;
            frontindex=0;
            capacity=capacity*2;

        }
        data[nextindex]=a;
        nextindex=(nextindex+1)%capacity;
        size++;
        if(frontindex==-1)
        {
            frontindex=0;
        }
    }
    int dequeue()
    {
        if(size==0)
        {
            cout<<"Queue Empty ";
            return 0;
        }
        int b=data[frontindex];
        frontindex=(frontindex+1)%capacity;
        size--;
        return b;
    }
    int top()
    {
         if(size==0)
        {
            cout<<"Queue Empty ";
            return 0;
        }
        return data[frontindex];
    }
    
    

};
 int main()
 {
    Queue p1(5);
    p1.enqueue(4);
    p1.enqueue(5);
    p1.enqueue(8);
    p1.enqueue(9);
    p1.enqueue(30);
    p1.enqueue(40);
    cout<<p1.getsize()<<endl;
    cout<<p1.isempty()<<endl;
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
    p1.enqueue(50);
    
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
      cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
    

 }