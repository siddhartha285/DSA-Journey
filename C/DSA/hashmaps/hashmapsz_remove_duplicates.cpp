#include<iostream>
#include<vector>
using namespace std;
#include<unordered_map>
vector<int> removeduplicates(int *a,int size)
{
    vector<int> output;
    unordered_map<int ,bool> seen;
    for(int i=0;i<size;i++)
    {
        if(seen.count(a[i])>0)
        {
            continue;
        }
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
    return output;
}
int main()
{
    int a[]={1,1,2,2,4,4,3,3,3,5,5};
    vector<int> ans=removeduplicates(a,11);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}