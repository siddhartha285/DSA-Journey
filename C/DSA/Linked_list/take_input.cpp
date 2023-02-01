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
    node *head=NULL;
    cout<<"Enetr data";
    cin>>data;
    while(data!=-1)
    {
        node *n1=new node(data);
        if (head==NULL)
        {
            head=n1;
        }
        else
        {
            node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=n1;
        

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