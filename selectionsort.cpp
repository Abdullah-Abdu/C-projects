/* Name: Anshu J Behera
StudentID:1182174
Program: 4.3 Selection-sort.cpp
Description:Sorts a Randomly generated Array
*/

#include <iostream>
#include <stdlib.h>

using namespace std;
void selectionsort(int *A,int size);				//Sorting Function

int main()
{
	int *A=0,size=0;								//Initializing the Parameters
	for (int i=0;i<7;i++)							//Loop to "test the result for seven randomly generated arrays"
	{	
		cout<<endl<<endl;
		cout<<"Enter the desired size of the array...";
		cin>>size;									//Dynamic allocation of size
		if (size<=0)
		cout<<"Invalid Entry"<<endl;				//Checks for validity of Parameter
		else
		{
		A=(int *)malloc(sizeof(int)*size);			//Memory Allocation
		if (A==0)									//Checks if Memory has been allocated
		{										
			cout<<"Out of Memory";
			return 1;
		}
		selectionsort(A,size);						//Calls the sorting Function
		free(A);
		}											//Deallocates the memory from the sorted array
	}
	return 0;
}

void selectionsort(int A[],int size)
{	
	int loc=0,min=0;								//Initializing the Values	
	cout<<"The unsorted array is..."<<endl;			
	for (int i=0;i<size;i++)
	{
	A[i]=rand()%100;								//Initialising the array with randomly generated numbers
	cout<<A[i]<<"  ";								//Display the unsorted array
	}
	cout<<endl;				
	for (int i=0;i<size;i++)						//Sorting	
	{		
		min=A[i];									//Setting the minimum value as the value of the first element in the unsorted portion of Array	
		loc=i;										//Setting the location of minimum value as the first element's position in the unsorted portion of Array
		for (int j=i+1;j<size;j++)
		{	if (min>A[j])							//Update variables min & loc if lower values than min is found
			{
			min=A[j];
			loc=j;
			}
		}
		if (i!=loc)									//Checks if loc has been updated
		{											//If true
		A[i]=(A[loc]+A[i])-(A[loc]=A[i]);			//Swaps the values of the 'minimum value element'  with the first element in the unsorted portion of Array
		}
		cout<<"The array after iteration "<<i+1<<" is..."<<endl;		
		for (int j=0;j<size;j++)
			cout<<A[j]<<"  ";						//Displays the array after each iteration
		cout<<endl;
	}
}

	
	
