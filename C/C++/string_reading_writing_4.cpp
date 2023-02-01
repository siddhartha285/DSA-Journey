#include <iostream>
using namespace std;
int main()
{
char s[50];
char t[50];
cout<<"Enter your name: ";
cin.get(s,50);
cout<<"Welcome: "<<s;
cout<<endl;
cin.ignore(); /* either use cin.ignore() or use cin.getline in place of cin.get() to get proper output*/
cout<<"Enter your name again";
cin.get(s,50);
cout<<"Hi "<<s;
return 0;
}