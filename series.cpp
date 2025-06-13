/* Name: Anshu J Behera
StudentID:1182174
Program: 4.1 Series.cpp
Description:Calculate the sum of series: 1+(x/1!)+(x^2/2!).....(x^n/n!)
*/

#include <iostream>

using namespace std;

int main()
{
	int n=0;
	float sum=1,x=0;
	double fact=1,num;										//Type Double to accomodate tentative large values of Exponential and Factorials
	cout<<"The series is: 1+(x/1!)+(x^2/2!)+(x^3/3!)...(x^n/n!)"<<endl;
	cout<<"Enter the Values of x and n...";
	cin>>x>>n;												//Input the values of  parameters
	if (n<=0)
	cout<<"Invalid Parameters";								//Checks for validity of Parameter
	else
	{
	num=x;											
	for(int i=1;i<=n;)										//Loop to Calculate the sum of the Series
	{
		sum+=num/fact;										//Updates the value of sum
		num*=x;												//Calculates the value of Numerator of next term
		fact*=(++i);										//Calculates the value of Denominator of next term
	}
	cout<<"The sum of the series is..."<<sum;				//Output
	}
	return 0;
}
