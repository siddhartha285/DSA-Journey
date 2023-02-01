#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int a)
    {
        data=a;
        next=NULL;
    }
};
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }

}
Node* takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            
            head=newnode;
            tail=newnode;

        }
        else
        {
            tail->next=newnode;
            tail=tail->next;

        }
        cin>>data;

    }
    return head;
}
Node * insertnode(Node *head,int data,int i)
{
     Node *temp=head;
    Node *newnode=new Node(data);
    if(i==0)
    {
        newnode -> next=head;
        head=newnode;
         return head;
        
        
    }
 
    int count=0;
    while(count<i-1 && temp!=NULL)
    {
        temp=temp->next;
        count++;

    }
    if(temp!=NULL)
    {
        Node *a=temp->next;
        temp->next=newnode;
        newnode->next=a;
    }
    return head;
   





}
int main()
{
    Node *head=takeinput();
    print(head);
    cout<<endl;
    head= insertnode(head,4,0);
    print(head);
    
}

