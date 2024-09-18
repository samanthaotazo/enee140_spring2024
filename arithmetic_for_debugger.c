/* This program performs some arithmetic with the intent of
 * teaching skills with the CLion debugger.
 * 
 * Created September 18th by Samantha Otazo*/

#include <stdio.h>

int main(void) {
    //declare values and assign them arbitrary values
    int x = 1;
    int y = 2;
    int count;
    
    //perform arithmetic on our variables
    x = x+1; //select this row
    x = x - y; //select this row

    for (count = 0; count <4; count++){
        y = y+3; //select this row...but remember you can use step out to exit the loop.
    }

    //print our values to confirm the debugger works
    printf("X is %d\n", x);
    printf("Y is %d\n", y);


    return 0;
}
