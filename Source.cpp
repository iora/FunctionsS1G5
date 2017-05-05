#include <stdio.h>
//#include <iostream>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum( int myArray[] )
{ 
	int i, getSum = 0;

	for (i=0;i<500;i++)

	{
		getSum +=myArray[i];
	}

	return getSum;
}

double getSumOfSquares(int myArray[])

{
	double sum = 0;
	for (int i = 0; i < 500; i++)
		myArray[i] = myArray[i] * myArray[i];
		sum = sum + myArray[i];

	return sum;
}

void printAsChars( int myArray[] )
{	
	int c;
	for (c=0;c<500;c++)
		printf("%c\n",myArray[c]);
}

double getAverage( int myArray[] );

int subtractAllValues( int myArray[] ) {

	for ( int i = 0; i < 500; i++ ) {

		myArray[ i ] = myArray[ i ] - 5;

	}

	return 0;
	
};

float invertAllValues( int myArray[] );

void printGroupMemberNames();

int main( void ) {

	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;
	
	int sum = getSum( row );
	printf("%i",sum);
	printAsChars( row );
	subtractAllValues( row );

	double sumSquare = getSumOfSquares(row);

	std::cout << sumSquare << '\n';

	return 1;

}


void printGroupMemberNames() {

	printf("Ashyr Mamedov\nErkin Rozyyev\nHeng Ly\nSirimony Heng\nSoheng Pecheng\n");

}