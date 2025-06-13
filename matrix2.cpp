/* Name: Anshu J Behera
StudentID:1182174
Program: 3.2 fibonacci.cpp
Description:Generate a fibonacci series
*/

#include <iostream>

using namespace std;

void mat_read(int a[10][10],int p,int q,char d);
void mat_disp(int a[10][10],int p,int q);
void mat_mult(int a[10][10],int b[10][10],int c[10][10],int p,int q,int r);

int main()
{
	int a=0,b=0,c=0;
						
	cout<<"Input the dimensions p,q,r...";
	cin>>a>>b>>c;
	if (a>10||b>10||c>10)
	cout<<"Parameter exceeds limit";
	else if (a<=0||b<=0||c<=0)
	cout<<"Invalid Parameters";
	else
	{	
	int A[10][10]={{0}},B[10][10]={{0}},C[10][10]={{0}};
	mat_read(A,a,b,'A');
	mat_read(B,b,c,'B');
	cout<<C[0][2]<<endl;
	mat_mult(A,B,C,a,b,c);
	cout<<C[0][2]<<endl;
	mat_disp(C,a,c);
	}	
	return 0;
}
void mat_read(int a[10][10],int p,int q,char d )
{
	cout<<"Input the values of matrix "<<d<<endl;
	for (int i=0;i<p;i++)
	{ for (int j=0;j<q;j++)
		{
			cout<<"Enter the Value of "<<d<<" ["<<i+1<<"] ["<<j+1<<" ]...";
			cin>>a[i][j];
		}
	}
}
void mat_disp(int a[10][10],int p,int q)
{	
	cout<<"The value of C=A*B is..."<<endl;
	for (int i=0;i<p;i++)
	{ for (int j=0;j<q;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void mat_mult(int a[10][10],int b[10][10],int c[10][10],int p,int q,int r)
{
	for (int i=0;i<p;i++)
	{
		for(int j=0;j<r;j++)
		{
			for (int k=0;k<q;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
}








	

