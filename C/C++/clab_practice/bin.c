#include<stdio.h>
int main()
{
    int arr[100],low,mid,high,n,key;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    scanf("%d",&key);
    low=0;
     high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("\n%d",mid);
            return 0;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
            high=mid-1;
        
    }
    printf("not presesnt");
    return 0;
}