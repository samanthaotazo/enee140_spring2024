/* Practice with C types, casts, and operators
 * using practice arithmetic problems.
 * All problems are from the fall 2016 midterm.
 * Created 27 September by Samantha Otazo */

#include <stdio.h>
#include <limits.h>


int main() {
    int a = 10;
    unsigned b = 9;
    float c = 8;
    float d = 7;

//Problems
    float r1 = c/a; //we think this will be
    printf("r1 is %.1f\n", r1);

    unsigned r2 = b/a; //we see this is 0
    printf("r2 is %d\n", r2);

    unsigned r3 = b % 2; // remainder is 1 so r3 = 1
    printf("r3 is %d\n", r3);

    //unsigned r4 = c % 2; //this produced an error -> you can only take the modulus of an integer type variable

    unsigned r5 = INT_MAX % 2; //we see INT_MAX is always odd so the remainder is 1
    printf("r5 is %u\n", r5);

    float r6 = (float)(b/a)*10; //parentheses show us division is done first so we get 0.0
    printf("r6 is %.1f\n", r6);

    float r7 = c/a *(int)(d+3); //we see inclusion of any float makes this a floating point arithmetic problem
    printf("r7 is %.1f\n", r7); //result is 8.0

    int r8 = a++ + ++b; //this will compute a + ++b and assign it to r8 then it will compute a++
    printf("r8 is %d\n", r8);
    printf("a is now %d\nb is now %d\n",a,b);

    float r9 = c/d;
    printf("r9 is %.1f\n", r9);

    float longvariable = 8.679;
    printf("%f rounds to to %.2f", longvariable, longvariable); //format specifier rounds up or down


    return 0;
}
