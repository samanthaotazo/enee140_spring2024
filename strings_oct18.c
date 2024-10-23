/*Write code to scan in user input and print
* all lowercase letters as capitals.
Created 18 October by Samantha Otazo. */

#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

int main(void) {
    char string[MAXSIZE];
    char string2[] = {'a', 'b', 'c', 'd', '\0'};
    /*int length = strlen(string);
    printf("Length is %d\n", length); //there is nothign in string so this doesn't help us*/
    int i;

    //scan in user input
    //this is going to scan in 30 values...what if we type less than 30
    //this works, just needs second new line
    /*for (i = 0; i< MAXSIZE;i++){
        scanf("%c", &string[i]);
    }*/
    //scanf("%s", string); //this only scans up to the first space
    fgets(string, MAXSIZE, stdin);

    //capitalize lowercase letters only
    for (i = 0; i < strlen(string) && (string[i] != '\0'); i++) { //make sure you only use strlen after you have stuff in your string
        if (string[i] >= 'a' && string[i] <='z') {
            string[i] = string[i] + 'A' - 'a';
        }
    }
    //printf("Length is %d\n", strlen(string)); //this evaluates correctly after we have some values in our string
    //print the string
    printf("%s", string);
    return 0;
}
