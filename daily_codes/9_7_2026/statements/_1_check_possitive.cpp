#include<iostream>
using namespace std;
int main()
{
	
	int n ;
	cout<< "enter a number :";
	cin>> n ;
	if(n > 0){
		cout<< "the given number " << n << " is possitive. ";
	}
	else if(n==0){
		cout<<" the given nubmer "<<n <<" is equal to 0.";
	}
	else{
		cout<<"the given number " <<n<<"is negative .";
	}
	return 0;
}
