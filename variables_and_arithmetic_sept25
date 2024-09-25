#include <stdio.h>
#include <limits.h>

int main() {
    int a = 3;
    int b = 7;
    float c = 5.8;


    //demonstrate integer overflow
    printf("%u", UINT_MAX+1); // ex. binary 1111+1 = 10000 but the leftmost one gets discarded

    a = b +c; //
    printf("The result of %d + %.1f is %d\n", b, c, a);
    //the value of a is no longer 3, it is 12. b and c have not changed

    //we see a increase by one:
    printf("After ++a, a = %d\n", ++a); //note that ++a computes before the printf

    //we see a++ executes after printf - order of operations
    printf("After a++, a = %d\n", a++);
    printf("a is now %d\n", a);

    //dividing by different variable types
  //c = (float) b/2; // this is a float divided by an int so it produces a float result
  //printf("The result of b/2 is %.1f", c);
    c = b/2; // this is an int/int so the result is int
  printf("The result of b/2 is %.1f", c); //3 (our integer result) is passed into floating point c
    return 0;
}
