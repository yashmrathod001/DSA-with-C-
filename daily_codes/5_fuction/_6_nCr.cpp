#include<iostream>
using namespace std;
int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact *= i; 
	}
	return fact;
	
}
void nCr(int n, int r)
{
	int ncr = fact(n)/((fact(r))*(fact(n-r)));	
	cout<< " the nCr is " << fact;
}



int main()
{
	int n,r;
	cout<<"enter a number n and r for the nCr :";
	cin>>n >> r;
	nCr(n,r);


	return 0;
}
