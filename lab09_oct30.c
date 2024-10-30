/* This program illustrates how break and continue work in loop
							Gang Qu
							Oct. 25, 2011
							Tudor Dumitras
							Apr. 12, 2014
*/

#include <stdio.h>

int main(void)
{
/* Modify the break_continue.c program from the class public directory on GRACE as follows:*/
/*1. Rewrite the two for loops with while loops, then with do‐while loops.
2. What will be the output if you remove the first ’\n' in the second and fourth printf()
statements?
3. What will be the output if we use each of the following statement to replace the for loop
for (x=1;x<10; x++)
    (a) for (x=1; x<10; x=x+2)
    (b) for (x=2; x<10; x=x+2)
    (c) for (x=1; x!=10; x=x+2)
    (d) for (x=2; x!=10; x=x+2) */

    int x, y;

    for (x=1; x<10; x++) {
        if (x == 5)
            break;
        printf("%2d", x);
    }

    printf("\nx=%2d\n",x);

    for (y=1;y<10; y++) {
        if (y == 5)
            continue;
        printf("%2d", y);
    }

    printf("\ny=%2d\n",y);

/*Rewrite the following code segment of if‐else statements by using the switch statement. You
can test your code by writing a complete C program. Make sure that you use representative values
of a that cover all the possible cases.*/
    /*int a;
    if (a % 4 == 0) {
        printf("I am happy!\n");
    } else {
        if (a % 4 == 2) {
            printf("I am not that happy.\n");
        } else {
            printf("I am sad. \n");
        }
    }
    return 0;*/
}
