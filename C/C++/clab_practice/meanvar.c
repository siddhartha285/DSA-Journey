#include<stdio.h>
#include<math.h>
int main(){
    float mean,var,std;
    int n;
    int sum=0;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    mean=(float)sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+pow(a[i]-mean,2);

    }
    var=(float)sum/n;
    std=(float)sqrt(var);
    printf("\n%.1f\n%.1f\n%.1f",mean,var,std);

}