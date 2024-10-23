/* This code reviews how to access command line arguments,
 * including determining the number of arguments entered and printing out
 * the text that was entered.
 *
 * Created 23rd September by Samantha Otazo */
#include <stdio.h>

int main (int argc, char *argv[]){
    printf("There are %d arguments.\n", argc); //How many arguments does this print?

    if (argc > 1){
        printf("The second argument is %s.\n", argv[1]);
    }

    return 0;
}
