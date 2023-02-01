#include <iostream>
using namespace std;

int main(void) {
	// your code goes here
	int a;
	cin>>a;
	int b[a][2];
	int sum;
	
	    for(int i=0;i<a;i++)
	    {
	        for(int j=0;j<2;j++)
	        {
	            cin>>b[i][j];
	           
	        }
	    }
	    

	for(int i=0;i<a;i++)
	{
	    for(int j=0;j<2;j++)
	    {
	      
	            sum=sum+((4*b[i][j])+(7*b[i][j]));
	            cout<<sum<<endl;
                continue;
	            
	            
	   
	        
	    }
        sum=0;
	}
	
	return 0;
}
