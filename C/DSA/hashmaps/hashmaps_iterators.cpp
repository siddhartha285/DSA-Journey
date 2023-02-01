#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
int main()
{
    unordered_map<string, int> ourmap;
    ourmap["hi"]=1;
    ourmap["hello"]=2;
    ourmap["how"]=3;
    ourmap["yes"]=4;
    unordered_map<string ,int>::iterator it=ourmap.begin();
    while(it!=ourmap.end())
    {
        cout<<"key: "<<it->first<<"value: "<<it->second<<endl;
        it++;
    }
    //find: it will give an iterator
    unordered_map<string,int>::iterator it2=ourmap.find("yes");
    cout<<it2->first<<" "<<it2->second<<endl;

    //similarly iterators can also be used with vectors
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>::iterator it1=v.begin();
    while(it1!=v.end())
    {
        cout<<*it1<<endl;
        it1++;
    }
}