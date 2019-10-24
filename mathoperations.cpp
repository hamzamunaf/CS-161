/*********************************************************************
** Program Filename:Assignment.cpp
** Author:Hamza Munaf
** Date:1/15/18 
** Description:Testing values
** Input:num1,num2  
** Output:result
*********************************************************************/
#include <iostream>
#include <cmath>
using namespace std ;
int main() {
	float num1 , num2,result ;
	num1=2.0;	
	num2=3.0;
	result= cos(num1/num2) ;
	cout << "Result for cos(2/3) is :"<< result << endl;
	result=num1*cos(num1/num2) ;
	cout << "Result for 2cos(2/3) is : " << result<< endl;
	num1=3.0;
	num2=4.0;
	result=tan(-num1/num2) ;
	cout << "Result for tan(-3/4) is :" << result << endl;
	num1=55.0 ;
	result= log10(num1);
	cout<< " Result for log10(55) is :" << result << endl;
	num1=60.0;
	result= log(num1) ;
	cout<< " Result for ln(60) is : " << result << endl; 
	num1=15.0;
	num2=2;
	result=(log(num1))/(log(num2)) ;
	cout<<" result for log2(15) is determined by using logb(x)=(lnx)/(lnb) " << result << endl;
	num1=40.0;
	num2=4.0;
	result=(log(num1))/(log(num2)) ;
	cout<< " Result for log4(40) is : " << result << endl ;
	num1=1.0;
	num2=3.0;
	result=pow( num2, (sin(num1)));
	cout<< " Result for 3^sinx(x=1) where x is equal to 1 : " << result << endl ;
	num1=10.0;
	result=pow(num2 , (sin(num1)));
	cout<<"result for 3^sinx(x=10) where x is equal to 10 : " << result << endl ;
	num1=100.0;
	result=pow(num2, (sin(num1)));
	cout<<"result for 3^sinx(x=100) where x is equal to 100 : " << result << endl ;
	num1=((pow(1.0,2))+1);
	num2=2.0;
	result=(log(num1))/log(num2) ;
	cout<<" result for log2(x^2 +1) where x is equal to 1 : " << result << endl ; 
    num1=((pow(10.0,2))+1);
    num2=2.0;
    result=(log(num1))/log(num2) ;
    cout<<" result for log2(x^2 +1) where x is equal to 10 : " << result << endl ;
    num1=((pow(100.0,2))+1);
    num2=2.0;
    result=(log(num1))/log(num2) ;
    cout<<" result for log2(x^2 +1) where x is equal to 100: " << result << endl ;
	return 0 ;
}
