#include"triennode.h"
#include<string>
class Trie{
    trienode *root;
    public:
    Trie()
    {
    root =new trienode('\0');
    } 
void insertword(trienode *root,string word)
{
    if(word.size()==0)
    {
        root->isterminal=true;
        return;
    }
    int index=word[0]-'a';
    trienode *child;
    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else{
        child=new trienode(word[0]);
        root->children[index]=child;
    }
    //Recursive call
    insertword(child,word.substr(1));

}
void insertword(string word)
{
    insertword(root,word);
}
bool search(trienode *root,string word)
{
  if(word.size()==0)
  {
    return root->isterminal;
  }
  int index=word[0]-'a';
  if(root->children[index]!=NULL)
  {
    return search(root->children[index],word.substr(1));
  }
  else
  {
    return false;
  }
}

bool search (string word)
{
    return search(root, word);
}
void removeword(trienode *root,string word)
{
    if(word.size()==0)
    {
        root->isterminal=false;
        return;
    }
    int index=word[0]-'a';
    trienode *child;
    if(root->children[index]!=NULL)
    {
        child=root->children[index];

    }
    else
    {
        return;
    }
    removeword(child,word.substr(1));
    if(child->isterminal==false)
    {
        for(int i=0;i<26;i++)
        {
            if(child->children[i]!=NULL)
            {
                return;
            }
        }
        delete child;
        root->children[index]=NULL;
    }
}
void removeword(string word)
{
    removeword(root,word);
}

};
