#include<iostream>
#include"treenode.h"
using namespace std;
void printtree(treenode<int>* root)
{
    cout<<root->data<<":";
    
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";

    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printtree(root->children[i]);
    }
}
int main()
{
    treenode<int>*root=new treenode<int>(1);
    treenode<int>*node1=new treenode<int>(2);
    treenode<int>*node2=new treenode<int>(3);
}

