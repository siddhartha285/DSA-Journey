int strlen(char input[])
{
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
void removeXhelper(char input[],int start)
{
    if(input[start]=='\0'||input[start+1]=='\0')
    {
        return;
    }
    removeXhelper(input,start+1);
    if(input[0]=='x')
    {
        for(int i=strlen(input);i>=start+1;i--)
        {
            input[i-1]=input[i];
        }
    }       
}
void removeX(char input[]) {
    removeXhelper(input,0);

}


#include <iostream>

using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
