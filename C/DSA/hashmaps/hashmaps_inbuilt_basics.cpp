#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string,int> ourmap;
    //insert two ways 1. by using at 2. by using a pair
    pair<string,int> p("abc",1);
    ourmap.insert(p);
    ourmap["def"]=2;
    //find or access
    cout<<ourmap["abc"]<<endl;
    //or
    cout<<ourmap.at("abc")<<endl;
    //if a key is not present
    //cout<< ourmap.at("ghi")<<endl; it will give error
    cout<<"size:"<<ourmap.size()<<endl;
    //but this way will not give error
    cout<<ourmap["ghi"]<<endl;
    cout<<"size:"<<ourmap.size()<<endl;

    //check presence
    //count only give if key is present or not means 0 or 1
    if(ourmap.count("ghi")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    //erase
    ourmap.erase("ghi");
    if(ourmap.count("ghi")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    
}