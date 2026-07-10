#include<iostream>
using namespace std;
void sum(int a, int b)
{
	int sum = a+b;
	cout<< sum;
	
}
int main()
{
	int a , b;
	cout<<"enter two numbers :";
	cin>> a >> b ;
	sum(a,b);
	return 0;
	
}
