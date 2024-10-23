/* This program demonstrates arrays. It prompts user to enter 10 integers one by one
	and gives their sum.

   Some of the features:
	1. array declaration
	2. use a constant for array size to add flexibility of your program
		(say later you want to compute the sum of 20 numbers)
	3. we will learn more about the for loop later

							Gang Qu, Sept. 20, 2011
							Tudor Dumitras, Feb 18, 2014
*/

#include <stdio.h>
#define SIZE 3

int
main()
{
    int a[SIZE];
    int i, sum = 0;

/* Question 1: Why define 10 as a constant variable SIZE instead of just using the value 10?
 *This makes it easier to make changes later - modularity of program!
 *
 * Question 2: Why initialize sum with 0 rather than 1 or -1?
 *
 * Before adding any elements (as we add them 1 by 1) the sum is 0.
*/

    for (i=0; i<SIZE; i++) {
        printf("Enter integer number %d: ", i);
        scanf("%d", &a[i]);
    }

    for (i=0; i<SIZE; i++) {
        sum = sum + a[i];
        printf("%4d", a[i]);
    }

/* Question 3: How is the sum of the 10 integers calculated?
 * By adding each index to the sum of the previous recursion
 *
* Question 4: Add the following line after you print out sum, re-compile the code, run it. Observe
the output and try to guess/reason why this happens. */

    printf("overflow: a[SIZE] = %4d\n", a[SIZE]); //this is out of bounds and gives junk

    printf("\nThe sum is : %d\n", sum);

    return 0;
}
