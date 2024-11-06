#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE 200


int get_next_word (char line[], char word[]);
int main(int argc, char *argv[])
{
    FILE *file;
    char line[MAX_LINE];

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
        while (get_next_word(...)!= 0){
            //do some stuff
        }
    }

    fclose(file);
    return 0;
}
