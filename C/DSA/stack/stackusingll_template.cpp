#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node<T> *next;
    Node(T a){
        next=NULL;
        data=a;
    }
};
template<typename T>
class stack_template{
    private:
    Node<T> *head;
    int size;
    public:
    stack_template(){
        head=NULL;
        size=0;
    }
    int getsize()
    {
        return size;

    }
    bool isempty()
    {
        return head==NULL;
    }
    void push(T data)
    {
        Node<T> *newnode=new Node<T>(data);
        if(head!=NULL)
        {
            newnode->next=head;

        }
        head=newnode;
        size++;

    }
    T pop()
    {
        if(head==NULL)
        {
            return -1;
        }
        T a=head->data;
        Node<T> *temp=head;

        head=head->next;
        size--;
        delete temp;
        return a;
    }
    T top()
    {
        if(head==NULL)
        {
            return -1;
        }
        return head->data;


    }
};
int main()
{
    stack_template<int> p;
    p.push(10);
    p.push(20);
    p.push(30);
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop();
    

}