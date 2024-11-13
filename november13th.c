#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_LINE 200


int next_word (const char line[], char word[], int size);
int main(int argc, char *argv[])
{
    FILE *file;
    char line[MAX_LINE];
    char word[MAX_LINE];
    int word_count = 0;

    // check to make sure that all the file names are entered
    if (argc != 2) {
        printf("Usage: executable section_file name_file output_file\n");
        exit(0);
    }

    file = fopen(argv[1], "r");

    // check whether the file has been opened successfully
    if (file == NULL) {
        printf("Cannot open file %s!\n", argv[1]);
        exit(0);
    }

    while (fgets(line, MAX_LINE, file) != NULL) {
        printf("%s", line);
        /*Do some stuff with the line*/
        while (next_word(line, word, MAX_LINE)){
            if (word[0] != '\0') {
                word_count++;
                printf("#%d word is: %s\n", word_count, word);
            }
        }
    }

    fclose(file);
    return 0;
}
//correction: Check if the word is empty before quitting rather than using a state variable.
int next_word(const char line[], char word[], int size){
    static int count_invocation = 0;
    int word_index = 0;
    //clear word array
    word[0] = '\0';

    while (word_index < size && count_invocation < MAX_LINE){//loop until reach line length limit
        //if character in line is a letter, copy it into word
        if (isalpha(line[count_invocation]) || isdigit(line[count_invocation])){
            word[word_index] = line[count_invocation];
            word_index++;
            count_invocation++;
            //if character is a space, punctuation char, or new line the entire word has been scanned.
        } else if (isspace(line[count_invocation]) || ispunct(line[count_invocation])){
            if(word[0] != '\0'){
                word[word_index] = '\0'; //close word
                count_invocation++;
                //lowercase_string(word);
                return 1; //word copied
            } else {
                count_invocation++;
                return 2; //no characters were copied, but end of line was not reached
            }
        } else if (line[count_invocation] == '\n' || line[count_invocation] == '\0'){
            //if some characters copied, close word and return 1
            if (word[0] != '\0'){
                word[word_index] = '\0';
                //lowercase_string(word);
                count_invocation = 0;
                return 1;
                //if no characters copied but end of line was reached, return 0
            } else {
                count_invocation = 0;
                return 0;
            }
            //otherwise, move counter past character
        } else {
            count_invocation++;
            return 0;
        }
    }
}
