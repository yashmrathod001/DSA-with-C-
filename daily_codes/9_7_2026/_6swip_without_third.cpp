#include<iostream>
using namespace std;
int main()
{
	int a , b ;
	cout <<" enter two numbers ";
	cin >>a >> b ;
	cout<< " befor swiping : " << a  << " "<< b <<"\n";
	a = b + a ;
	b = a - b ;//a
	a = a - b ;
	cout<< "after swiping : " <<a <<" " << b ; 
	
	return 0;
}
