#include<iostream>
#include<string>
using namespace std;
int main()
{
    int countv=0;
    int countc=0;
    int countn=0,counts=0;
    string str="Welcom world abcd";
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'|| str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'|| str[i]=='u')
        {
            countv=countv+1;
        }
        else if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='0' )
        {
            countn=countn+1;
        }
        else if(str[i]!=' ' && str[i+1]==' ')
        {
            counts=counts+1;
            
        }
         else if(str[i]==' ' && str[i+1]==' ')
        {
            counts=counts;
            
        }
          else if(str[i]==' ' && str[i+1]!=' ')
        {
            counts=counts;
            
        }
          else if(str[i]==' ' && str[i+1]=='\0')
        {
            counts=counts-1;
            
        }
          else if(str[i]==' ' && str[i+1]==' ')
        {
            counts=counts;
            
        }
       
        else if(str[i]=='b'|| str[i]=='c'|| str[i]=='d'|| str[i]=='f'|| str[i]=='g'|| str[i]=='h'|| str[i]=='l'|| str[i]=='j'|| str[i]=='k'|| str[i]=='m'|| str[i]=='n'|| str[i]=='p'|| str[i]=='q'|| str[i]=='r'|| str[i]=='s'|| str[i]=='t'|| str[i]=='v'|| str[i]=='w'|| str[i]=='x'|| str[i]=='y'|| str[i]=='z'|| str[i]=='B'|| str[i]=='C'|| str[i]=='D'|| str[i]=='F'|| str[i]=='G'|| str[i]=='H'|| str[i]=='P'|| str[i]=='J'|| str[i]=='K'|| str[i]=='L'|| str[i]=='M'|| str[i]=='N'|| str[i]=='Q'|| str[i]=='R'|| str[i]=='S'|| str[i]=='T'|| str[i]=='V'|| str[i]=='W'|| str[i]=='X'|| str[i]=='Y'|| str[i]=='Z' )
        {
            countc=countc+1;
        }
    }
    cout<<"vowel: "<<countv<<endl<<"consonant: "<<countc<<endl<<"numbers: "<<countn<<endl;
    cout<<"Words: "<<counts+1;
    return 0;
}