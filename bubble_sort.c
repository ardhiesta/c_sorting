// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 8
// function main begins program execution
int main( void ) {
	// initialize a
	int a[ SIZE ] = { 6, 5, 3, 1, 8, 7, 2, 4 };
	int pass; // passes counter
	size_t i; // comparisons counter
	int hold; // temporary location used to swap array elements
	puts( "Data items in original order" );
	
	// output original array
	for ( i = 0; i < SIZE; ++i ) {
		printf( "%4d", a[ i ] );
	} // end for
	
	// for debugging
	//printf("\n");
	
	// bubble sort
	// loop to control number of passes
	for ( pass = 0; pass < SIZE; ++pass ) {
		// for debugging
		//printf("%d",pass);
		
		// loop to control number of comparisons per pass
		for ( i = 0; i < SIZE - 1; ++i ) {
			// for debugging
			//printf(" - %d",i);
			
			// compare adjacent elements and swap them if first
			// element is greater than second element
			if ( a[ i ] > a[ i + 1 ] ) {
				// for debugging
				//printf(" | %d - %d | ",a[ i ], a[ i + 1]);
				
				hold = a[ i ];
				a[ i ] = a[ i + 1 ];
				a[ i + 1 ] = hold;
			} // end if
		} // end inner for
		
		// for debugging
		//printf("\n");
		
	} // end outer for
	
	puts( "\nData items in ascending order" );
	
	// output sorted array
	for ( i = 0; i < SIZE; ++i ) {
		printf( "%4d", a[ i ] );
	} // end for
	
	puts( "" );
} // end main
