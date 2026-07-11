#include<iostream>
using namespace std;
int main()
{
	// Greatest of three 
	int a , b ,c ;
	cout<< "enter 3 numbers : \n";
	cin>> a >> b >> c ;
	if (a < b )
	{
		if (b < c){
			cout<< c << "is leargest  ";
		}
		else{
			cout<< b << " is leargest ";
		}
	}
	else
	{
		if(a < c )
		{
			cout<< c << " is leargest ";
		}
		else{
			cout<<a <<" is largest ";
		}
	}
	return 0;
	
}
