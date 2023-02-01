#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        next=NULL;

    }
};
node* insert()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1)
    {
        node *newnode=new node(data);
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
node* insertnode(node *head,int i,int data)
{
    node *newnode=new node(data);
    node *temp=head;
    if(i==0)
    {
        newnode->next=temp;
        head=newnode;
        return head;

        
    }
  
    int count=0;
    while(temp!=NULL && count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    newnode->next=temp->next;
    temp->next=newnode;
    
    }
    return head;
    
}
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head=insert();

    head=insertnode(head,5,99);
    print(head);

}