#include<iostream>
using namespace std;
int min(int a , int b)
{
	int minimum;
	if(a>b){
		minimum = b;
	}
	else{
		minimum =a;
	}
		return minimum;
}

int main()
{
	int a , b ;
	cout<< "enter two numbers :";
	cin>> a >> b ;
	int mini = min(a,b);
	cout<<"the minimun of given two numbers is "<< mini;
	return 0;
}
