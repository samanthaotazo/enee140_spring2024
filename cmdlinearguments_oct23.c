/* This code reviews how to access command line arguments,
 * including determining the number of arguments entered and printing out
 * the text that was entered.
 *
 * Created 23rd September by Samantha Otazo */
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]){

    printf("There are %d arguments.\n", argc); //How many arguments does this print?

    if (argc > 1){
        printf("The second argument is %s.\n", argv[1]);
        printf("The first character in the second argument is %c\n", argv[1][0]);
    }
/*strncmp is included in the string.h library
 *
 * It takes in 3 arguments: two strings and the number indices to compare.
 *
 * It will return 0 if they are equal or a number representing the difference
 * between the strings if they are a mismatch. */

    if (strncmp(argv[1],"hi.txt",6) == 0){ //note that strncmp returns 0 if the strings match
        printf("Our argv is 4");
    }
    return 0;
}
