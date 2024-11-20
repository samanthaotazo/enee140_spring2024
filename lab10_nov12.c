#include <stdio.h>

int main(){
    char string[] = "hello world";
    int string_length;
    int i;

    //print string character by character and determine its length
    for (string_length = 0; string[string_length] != '\0'; string_length++){
        //to keep track of where we are:
        printf("%c", string[string_length]);
    }
    printf("\nLength of string is %d\n", string_length);
    
    //loop through string and print it character by character, starting from the end
    for (i = string_length-1; i >= 0;i--){
        printf("%c", string[i]);
    }
}
