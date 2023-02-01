#include<iostream>
#include<queue>

#include"treenode.h"

using namespace std;
treenode<int> *takeinputlevel()
{
    int rootdata;
    cout<<"Enter root data:";
    cin>>rootdata;
    treenode<int>* root=new treenode<int>(rootdata);
    queue<treenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        treenode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"Enter the no of children of "<<front->data<<" ";
        int num;
        cin>>num;
        for(int i=0;i<num;i++)
        {
            int childdata;
            cout<<"Enter "<<i<<"th data of "<<front->data<<endl;
            cin>>childdata;
            treenode<int>*child=new treenode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}
treenode <int>* takeinput()
{
    int rootdata;
    cout<<"Enter data:";
    cin>>rootdata;
    treenode<int>*root=new treenode<int>(rootdata);
    int n;
    cout<<"Enter no of childrens of "<<rootdata;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        treenode<int>* child=takeinput();
        root->children.push_back(child);
    }
    return root;
}

void printtree(treenode<int> * root)
{
    if(root==NULL)
    {
        return;
    }
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
void printtreelevel(treenode<int>* root)
{
    queue<treenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        
        treenode<int> *front=pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<": ";
        for(int i=0;i<front->children.size();i++)
        {
            cout<<front->children[i]->data<<", ";
            pendingnodes.push(front->children[i]);



        }
        cout<<endl;
    }
}
int main()
{
  treenode<int>* root=takeinputlevel();

    
    printtreelevel(root);

}
//TODO 
