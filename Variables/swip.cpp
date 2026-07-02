#include<iostream>
using namespace std;
int main()
{
    //wihtout using the third variable 
    int a  , b ;
    cout<< " enter two integers " ;
    cin>> a >> b ;
    cout<< "before swiping a = " << a << " and b = " << b ;
    a = b - a ; 
    b = b - a ;//b = a
    a = a -b ;//a = b 
    cout<<"after swipint a = " << a << " and b = " << b ;
    
    /*with using the third variable 
    int a , b , temp ;
    cout<<"enter the values of a and b ";
    cin>> a >> b ;
    cout<< "before swiping a = " << a << "and b = "<<b ;
    temp = a ;
    a = b ;
    b = temp;
    cout<<"after swiping  a = " << a << " and b = " << b ;*/
    return 0;
    }