# include<iostream>
using namespace std;
 class Queue{
    private:
    int firstindex;
    int nextindex;
    int capacity;
    int *data;
    int size;
    public:
    Queue(int a){
        firstindex=-1;
        nextindex=0;
        size=0;
        data=new int[a];
        capacity=a;
    }
    int getsize(){
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void enqueue(int d)
    {
        if(size==capacity)
        {
            cout<<"Queue Full";
            return;
        }
        
        data[nextindex]=d;
        nextindex=(nextindex+1)%capacity;
        if(firstindex==-1)
        {
            firstindex=0;
        }
        size++;
    }
    int front()
    {
        if(isEmpty())
        {
            cout<<"Queue Empty ";
            return -1;
        }
        return data[firstindex];
        
    }
    int dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Empty ";
            return -1;
        }
        int a=data[firstindex];
        firstindex=(firstindex+1)%capacity;
        size--;
        return a;

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
    cout<<p1.isEmpty()<<endl;
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
      p1.enqueue(40);
    
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
    cout<<p1.dequeue()<<endl;
    

 }