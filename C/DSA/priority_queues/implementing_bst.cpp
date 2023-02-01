#include<iostream>
#include<vector>
class priorityqueues{
    vector<int> pq;
    public:
    priorityqueues()
    {

    }

    int getsize()
    {
        return pq.size();
    }
    bool isempty()
    {
        return pq.size()==0;
    }
    int getmin()
    {
        if(pq.size()==0)
        {
            return 0;
        }
        
        return pq[0];
    }
    void insert(int data)
    {
        pq.push_back(data);
        int child=pq.size()-1;
        while(child>0)
        {
        
        int parentindex=(child-1)/2;
        if(pq[parentindex]>pq[child])
        {
            int temp=pq[child];
            pq[child]=pq[parentindex];
            pq[parentindex]=temp;

        }
        else{
            break;
        }
        child=parentindex;
        }
    }
    void remove()
    {
        if(isempty())
        {
            return 0;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int parentindex=0;
        int leftchildindex=parentindex*2+1;
        int rightchildindex=parenindex*2+2;
        while(leftchildindex<pq.size())
        {
            int minindex=parentindex;
            if(pq[leftchildindex]<pq[parentindex])
            {
                minindex=leftchildindex;
            }
            if(rightchildindex<pq.size()&&pq[rightchildindex]<pq[parentindex])
            {
                minindex=rightchildindex;
            }
            if(minindex=parentindex)
            {
                break;
            }
            int temp=pq[minindex];
            pq[minindex]=pq[parentindex];
            pq[parentindex]=temp;

            parentindex=minindex;
            leftchildindex=2*parentindex+1;
            rightchildindex=2*parentindex+2;

        }

    }
} sAGHHU