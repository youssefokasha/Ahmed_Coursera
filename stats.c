/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */


int find_average( int * ptr , int count );

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
#define NULL (0)


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  int average;
  int max;
  int min;
  int i = 0;

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  average = find_average(test, SIZE);
	  while ( i < SIZE ){
		  if ( i == 0 ){
		  max = test [0];
		  min = test [0];
		  }
if (test [i] <= min) {
min = test [i];
}
else if ( test [i] >= max ) {
min = test [i];
}

int find_average ( int * ptr, int count) {

int i;
int average;
if ( ptr == NULL){
return 0;
}
if ( count <=0 ) {
count = 1;
}

for ( i = 0; i < count; i++){
average += *ptr;
}

return (average / count);

double find_medain ( int test , int SIZE)
{
	sort(test, test + SIZE);
	//check for even case
	if ( SIZE % 2 != 0 )
		return (double)a[ n / 2];
	return (double)(a[(n-1) / 2 + a[n / 2]) / 2.0
}


}

}
/* Add other Implementation File Code Here */
