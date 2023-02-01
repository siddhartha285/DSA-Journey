#include<iostream>
using namespace std;
void secsort(int input[],int size,int &count)
{
    count++;
    if(size==1)
    {
        return;
    }
    int i;
    int a;
    int min=input[0];
    for(i=0;i<size;i++)
    {
        if(input[i]<=min)
        {
            min=input[i];
            a=i;

        }
    }
    
            int temp=input[0];
            input[0]=min;
            input[a]=temp;
    secsort(input+1,size-1,count);
}

int main()
{
    int a[8]={9,5,3,4,7,12,2,1};
    int count=0;
    secsort(a,8,count);
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<count;
}