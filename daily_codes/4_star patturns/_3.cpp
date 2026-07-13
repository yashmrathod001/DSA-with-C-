#include<iostream>
using namespace std;
int main(){
	int n=4,a=1;
	cout<<" triangle in first Q\n";
	
	cout<<"\n in star form \n";
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)	
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n in number forn \n";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)	
		{
			cout<<a<<" ";
			a++;	
		}
		//a=1;
		cout<<"\n";
	}
	
	return 0;
}
