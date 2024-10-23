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

#define SIZE 10

int
main()
{
    int a[SIZE];
    int i, sum = 0;

    for (i=0; i<SIZE; i++) {
        printf("Enter integer number %d: ", i);
        scanf("%d", &a[i]);
    }

    for (i=0; i<SIZE; i++) {
        sum = sum + a[i];
        printf("%4d", a[i]);
    }

    printf("\nThe sum is : %d\n", sum);

    return 0;
}
