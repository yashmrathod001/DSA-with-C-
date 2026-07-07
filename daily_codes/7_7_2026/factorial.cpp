#include<iostream>
using namespace std;
int main()
{
	int n; 
	double fact;
	cout<< " enter a number to find factorial \n";
	cin >> n;
	
	fact = 1;
	for(int i = 1 ; i <= n ; i++ )
	{
		fact = fact*i;
		
	}
	cout<< " the factorial of given number is " << fact ;
	
//find factorial

	return 0;
}
