#include<iostream>
using namespace std;
int main()
{
	int a , b , c ;
	cout<<  "enter two number ";
	cin >> a >> b ;
	cout<<"before swiping " <<a  <<" "<< b;
	 
	c = b ; 
	b = a ;
	a = c ;
	cout <<"after swiping "<< a << " " << b;
	
	return 0;
}
