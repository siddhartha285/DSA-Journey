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
node* takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1)
    {
        node *ne=new node(data);
        if(head==NULL)
        {
            head=ne;
            tail=ne;
        }
        else
        {
            tail->next=ne;
            tail=tail->next;

        }
        cin>>data;
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
    node *head=takeinput();
    print(head);
}