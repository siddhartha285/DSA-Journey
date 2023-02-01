#include <iostream>
using namespace std;
int main()
{
  int i,n,c,x,q;
  int A[n];
  c=0;
  cout<<"Enter no of elements";
  cin>>n;
  cout<<"enter element to search";
  for(i=0;i<n;i++)
  {
  cin>>A[i];
  }
 
  cout<<"Element to search";
  cin>>x;
  for(i=0;i<n;i++)
  {
  if (A[i]==x)
  {
  cout<<"key"<<"="<<i;
  
  return 0;
  }   /* code */
  }
  cout<<"Unsuccesfull";
  return 0;


}