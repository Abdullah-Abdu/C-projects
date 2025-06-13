/* Name: Anshu J Behera
StudentID:1182174
Program: 4.2 Matrix.cpp
Description:Calculates the product of a matrix
*/


#include <iostream>
using namespace std;

void mat_read(int a[10][10],int p,int q,char d);								//Function :Dynamically Initialise the matrix
void mat_disp(int a[10][10],int p,int q);										//Function :Display the Matrix
void mat_mult(int a[10][10],int b[10][10],int c[10][10],int p,int q,int r);		//Multiply the Matrices

int main()
{
	int a=0,b=0,c=0;															
	cout<<"Input the dimensions p,q,r..."<<endl;								//Input the values of  parameters
	cout<<"p=";
	cin>>a;
	cout<<"q=";
	cin>>b;
	cout<<"r=";
	cin>>c;
	if (a>10||b>10||c>10)														//Checks for validity of Parameter
	cout<<"Parameter exceeds limit";
	else if (a<=0||b<=0||c<=0)
	cout<<"Invalid Parameters";													//Checks for validity of Parameter
	else
	{	
	int A[10][10]={{0}},B[10][10]={{0}},C[10][10]={{0}};						//Initialise the Matrix 
	mat_read(A,a,b,'A');														//Reads the value into Matrix A
	mat_read(B,b,c,'B');														//Reads the value into Matrix B
	mat_mult(A,B,C,a,b,c);														//Multiply the Matrices A and B
	mat_disp(C,a,c);															//Displays the value of Matrix C
	}	
	return 0;
}
void mat_read(int a[10][10],int p,int q,char d )
{
	cout<<"Input the values of matrix "<<d<<endl;								
	for (int i=0;i<p;i++)														//Variable to go through all the Rows 
	{ for (int j=0;j<q;j++)														//Variable to go through all the Columns
		{
			cout<<"Enter the Value of "<<d<<" ["<<i+1<<","<<j+1<<"]...";		
			cin>>a[i][j];														//Reads the value of i-th row and j-th column of the Matrix
		}
	}
}
void mat_disp(int a[10][10],int p,int q)
{	
	cout<<"The value of C=A*B is..."<<endl;
	for (int i=0;i<p;i++)														//Variable to go through all the Rows 
	{ for (int j=0;j<q;j++)														//Variable to go through all the Columns	
		{
			cout<<a[i][j]<<"\t";												//Reads the value of i-th row and j-th column element of the Matrix
		}
		cout<<endl;
	}
}
void mat_mult(int a[10][10],int b[10][10],int c[10][10],int p,int q,int r)
{
	for (int i=0;i<p;i++)														//Variable to go through all the Rows 
	{
		for(int j=0;j<r;j++)													//Variable to go through all the Columns	
		{
			for (int k=0;k<q;k++)
			c[i][j]+=a[i][k]*b[k][j];											//Calculates the value of i-th row and j-th column element of the Matrix C
		}
	}
}








	

