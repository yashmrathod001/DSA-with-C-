#include<iostream>
using namespace std;
int main()
{
	int n , odd = 0 , even = 0 ;
	
	cout<<"enter a number :";
	cin>> n;
	
	for(int i = 1 ; i <=n ; i++)
	{
		if (i%2==0)
		{
			even = even + i;
		}
		else if(i%2!=0)
		{
			odd = odd + i;
		}
	}
	cout<<"sum of odd :"<<odd ;
	cout<<"sum of even :"<<even;



	
	return 0;
}
