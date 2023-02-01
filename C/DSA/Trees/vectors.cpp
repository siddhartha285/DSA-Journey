#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector<int> *v=new vector<int>();
    vector<int> v;
    for(int i=0;i<50;i++)
    {
        v.push_back(i+1);
        cout<<v.capacity()<<endl;

    }
    cout<<"Elements:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}

