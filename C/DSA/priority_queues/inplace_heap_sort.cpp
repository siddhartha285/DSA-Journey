#include<iostream>
using namespace std;
void inplaceheapsort(int input[],int n)
{
    for(int i=1;i<n;i++)
    {
        int childindex=i;
        while(childindex>0)
        {
            int parentindex=(childindex-1)/2;
            if(input[parentindex]>input[childindex])
            {
                int temp=input[parentindex];
                input[parentindex]=input[childindex];
                input[childindex]=temp;
            }
            else{
                break;
            }
            childindex=parentindex;
        }
    }


int size=n;
while(size>1)
{
int temp=input[0];
input[0]=input[size-1];
input[size-1]=temp;

size--;

int parentindex=0;
int leftchildindex=2*parentindex +1;
int rightchildindex=2*parentindex +2;
while(leftchildindex<size)
{
    int minindex=parentindex;
    if(input[minindex]>input[leftchildindex])
    {
        minindex=leftchildindex;
    }
    if(rightchildindex<size &&input[minindex]>input[rightchildindex])
    {
        minindex=rightchildindex;

    }
    if(minindex==parentindex)
    {
        break;
    }
    int temp=input[minindex];
    input[minindex]=input[parentindex];
    input[parentindex]=temp;

    parentindex=minindex;
    leftchildindex=2*parentindex +1;
    rightchildindex=2*parentindex +2;
}
}
}
int main()
{
    int input[]={1,2,3,4,8,2,9,7,12,0};
    inplaceheapsort(input,10);
    for(int i=0;i<10;i++)
    {
        cout<<input[i]<<" ";
    }
}