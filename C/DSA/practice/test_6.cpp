#include<iostream>
#include <algorithm>
using namespace std;
int pairSum(int *arr, int n, int num)
{
    int count=0;
    int count2=0,count3=0;
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j)
    {
          if(arr[i]+arr[j]==num)
            {
                
                for(int x=0;arr[x]!='\0';x++)
                {
                    if(arr[i]==arr[x])
                    {
                        count2++;
                        
                    }
                      if(arr[j]==arr[x])
                    {
                        count3++;
                        
                    }
                    int a=count2;
                    int b=count3;
                    count+=a*b;
                }
            }
            else if(arr[i]+arr[j]<num)
            {
                i++;
            }
            else
            {
                j--;
            }
       
        
    }
    return count;
	//Write your code here
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}