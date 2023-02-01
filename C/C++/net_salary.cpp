#include <iostream>
using namespace std;
int main()
{
    float bsalary,pallowances,pdeductions,net_salary;
    cout<<"Enter your Basic Salary:"<<endl;
    cin>>bsalary;
    cout<<"Enter percentage of Allowances:"<<endl;
    cin>>pallowances;
    cout<<"Enter percentage of deductions:"<<endl;
    cin>>pdeductions;
    net_salary=bsalary-((pdeductions/100)*bsalary)+((pallowances/100)*bsalary);
    cout<<net_salary<<endl;
    return 0;

}