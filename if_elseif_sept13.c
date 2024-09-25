/* September 13th, 2024             Samantha Otazo
 * This code demonstrates if/if else loops
 * with a simple implementation using getchar().
 * */
#include <stdio.h>

int main() {
    char x;

    x = getchar(); //take user input

    if (x == 'a'){ //if x is 'a'
        printf("\nX is %c\n", x);
    } else if (x != 'a'){ // if x is not 'a'
        printf("X is not a");
    } else {
        printf("Hi"); // this line will never be reached because x will either be 'a' or not be 'a'
    }

    return 0;
}




