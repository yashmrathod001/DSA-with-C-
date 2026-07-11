#include<iostream>
using namespace std;
void sum(int n)
{
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum = i+sum;
	}
	cout << "the sum of given numbers is " << sum ;
	
}
int main()
{
	int n;
	cout<<"enter a number :";
	cin>>n;
	sum(n);
	return 0;
}
