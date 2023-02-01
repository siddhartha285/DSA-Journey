#include<iostream>
using namespace std;
#include"node.cpp"
int main()
{
    //Statically
    Node n1(1);
    Node *head1=&n1;
    Node n2(2);
    n1.next=&n2;
    cout<<(*head1).data;
    //Dynamically
    Node *n3=new Node(10);
    Node *head2=n3;
    Node *n4=new Node(15);
    n3->next=n4;
}