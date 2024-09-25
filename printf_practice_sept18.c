/* Here we look at the syntax of printf and explore
 * what generates errors.
 * 
 * Created September 18th, 2024 by Samantha Otazo */

#include <stdio.h>

int main(void) {
    //declare variables with arbitrary values
    int x = 2;
    int y = 4;
    float z = 9.5;


    printf("X is %d\n", x); //print variable x of int type using the integer parameter

    printf("x/2.0 is %f\n", x/2.0); //printing floating point division using a float type format specifier

    printf("x is %f\n",x); //format specfier does not match variable type


    //Lab 04 Questions

    /*(1) the number of format indicator %’s should match the number
     * of arguments (variable names)*/
    printf("The variables are %d", x, y); //THis is wrong because number of variables does not match

    /* (2) the first % should match the first argument,
     * the second % should match the second argument, and so on*/
    printf("\nx = %d and y = %d", y,x); //the order of your variables matters

    
    /*(3) The data type of an argument should match the corresponding 
     * type indicated by the parameter after the format indicator %. */
    printf("Z is %d\n", z); // Z is type float, but we used %d which specifies int

    return 0;
}
