#include<iostream>
using namespace std;

int sum(int n)
{
	int digit = 0;
	while(n>0)
	{
		digit = digit + (n % 10);
		n /= 10;
	}
	return digit;
}

int main()
{
	int n;
	cout<<"enter a number :";
	cin>>n;
	cout<<"the sum of given number's digits are "<< sum(n);

	return 0;
}
