#include<iostream>
#include<queue>
using namespace  std;
template <typename T>
class Binarytree{
    public:
    T data;
    Binarytree<T> *left;
    Binarytree<T> *right;
    Binarytree(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }


};
void print(Binarytree<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    if(root->left!=NULL)
    {
        cout<<"L"<<root->left->data;
    }
     if(root->right!=NULL)
    {
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);

}
Binarytree<int>* takeinput()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Binarytree<int>* root=new Binarytree<int>(data);
    Binarytree<int>* leftchild=takeinput();
      Binarytree<int>* rightchild=takeinput();
      root->left=leftchild;
      root->right=rightchild;
      return root;

}
Binarytree<int>* takeinputlevelwise()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Binarytree<int>* root=new Binarytree<int>(data);
    queue<Binarytree<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        Binarytree<int>* front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"Enter left child of "<<front->data;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1)
        {
           Binarytree<int>* child=new Binarytree<int>(leftchilddata);
           front->left=child;
           pendingnodes.push(child);
        }
             cout<<"Enter right child of "<<front->data;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1)
        {
           Binarytree<int>* child=new Binarytree<int>(rightchilddata);
           front->right=child;
           pendingnodes.push(child);
        }



    }
    return root;
}
 void printlevelwise(Binarytree<int>* root)
 {
    
    queue<Binarytree<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        Binarytree<int>* front=pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<":";
        if(front->left!=NULL)
        {
            cout<<"L"<<front->left->data;
            pendingnodes.push(front->left);
        }
        if(front->left!=NULL)
        {
            cout<<"R"<<front->right->data;
            pendingnodes.push(front->right);
        }
        cout<<endl;
    }
 }
int main()
{
    Binarytree<int>* root=takeinputlevelwise();
    printlevelwise(root);

}