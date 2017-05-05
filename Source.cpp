#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum( int myArray[] )
{ 
int i;
int getSum=0;
for (i=0;i<500;i++)
{
	getSum +=myArray[i];
}

return getSum;
}

double getSumOfSquares( int myArray[] )

void printAsChars( int myArray[] );

double getAverage( int myArray[] );

int subtractAllValues( int myArray[] );

float invertAllValues( int myArray[] );

void printGroupMemberNames();

int main( void ) {

	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;
	
	int sum = getSum( row );
	printf("%i",sum);


	return 1;

}




void printGroupMemberNames() {

	printf("Ashyr Mamedov\nErkin Rozyyev\nHeng Ly\nSirimony Heng\nSoheng Pecheng\n");

}

