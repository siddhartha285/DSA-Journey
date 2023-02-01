#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }


};
class stackusingll{
    private:
    Node *head;
    int size;
    public:
    stackusingll(){
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
    void push(int data)
    {
        Node *newnode=new Node(data);
         if(head!=NULL)
        {
            newnode->next=head;
            

        }
        head=newnode;
        size++;

    }
    int top()
    {
         if(isempty())
        {
            return -1;
        }
        return head->data;
    }
    int pop()
    {
        if(isempty())
        {
            return -1;
        }
    Node *temp=head;
        head=head->next;
        int a=temp->data;
        size--;
        return a;

    }

};
int main()
{
    stackusingll s;
    s.push(10);
    s.push(20);
    s.push(30);
   cout<<s.getsize()<<endl;
    cout<<s.pop()<<endl;
     cout<<s.getsize()<<endl;
    cout<<s.pop()<<endl;
     cout<<s.getsize()<<endl;
    cout<<s.pop()<<endl;
   
    
    return 0;
}