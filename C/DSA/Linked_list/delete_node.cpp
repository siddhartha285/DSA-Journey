#include<iostream>
using namespace std;
class node{
    public:

    node *next;
    int data;
    node(int a)
    {
        data=a;
        next=NULL;
    }
};
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
node * takeinput()
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
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;

        

    }
    return head;
}
 node * deletenode(node *head,int i)
{
    node *temp=head;
    int count=0;
     if(i==0)
    {
        node *temp2=head->next;
        delete head;
        head=temp2;
        return head;
    }
    while(count!=i-1 && temp!=NULL)
    {
        temp=temp->next;

        count++;
    }
    if(temp!=NULL)
    {
   
    node *a=temp->next;
    node *b=a->next;
    temp->next=b;
    delete a;
    }
    return head;
}
int main()
{
    node *head=takeinput();
    print(head);
    head=deletenode(head,7);
    print(head);
    


}