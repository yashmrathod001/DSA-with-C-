#include<iostream>
using namespace std;
int main(){
	int n=4,a=1;
	cout<<" triangle in first Q\n";
	cout<<"in * form \n \n";
	for(int i = 1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	cout<<"in number form \n \n";
	for(int i = 1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<a<<" ";
				a += 1;
			
		}
		a = 1;
		cout<<"\n";
	}
		
	return 0;
}
