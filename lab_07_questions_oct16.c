/*Below are the results of the Lab 07
 * discussion questions.
 * Created 9 October by Samantha Otazo*/
#include <stdio.h>

int main(void) {
/*Question 1: You are asked to write a program to read in two integers x
 * and y, then check whether (i) both x and y are positive, or (ii) x
 * is negative. Will the following code segment do the work? Check
 * your answer by testing it in a complete program with the inputs provided below.*/
    /*1. x = 2, y = 1
    2. x = 2, y = -1
    3. x = -2, y = -1
    4. x = -2, y = 1*/
    int x,y;
    scanf("%d%d", &x, &y);
    if (x > 0)
        if (y > 0)
            printf("Both positive.\n");
    else
        printf("x negative, y ignored.\n");



/*Question 2: What will be the output of the following code segment? Think about the answer and then check
your answer by testing it in a complete program.*/
    int a = 5;
    if (a = 0) {
        printf("a=0 is true. \n");
    }
    else {
        printf("a=0 is not true.\n");
    }
    if (a==0) {
        printf("a==0 is true. \n");
    }
    else {
        printf("a==0 is not true.\n");
    }

/*Question 3: Write a C program that generates 6 random even numbers between 2 and 20 (including both 2 and
20) and prints them out.*/

    return 0;
}
