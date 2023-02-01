#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float cgpa;

};
int main()
{
    struct student s[20];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].cgpa);
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %f",s[i].name,s[i].roll,s[i].cgpa);
    }


    return 0;
}