#include<iostream>
using namespace std;
int main(){
	int n=3, count=0;
	cout<<"the first pattur\n";
	
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=n;i++)	
		{
			count+=1;
			cout<<count<<"  ";
		}
		cout<<"\n";
	}
	
	return 0;
}
