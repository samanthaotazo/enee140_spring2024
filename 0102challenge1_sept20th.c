/* Challenge problems for section 0102 of ENEE140.
 * Created September 20th 2024 by Samantha Otazo.*/

#include <stdio.h>

int main() {
    /*Write a segment of code titled 0102_challenge1.c that asks
     * the user a question and prompts them ot input a yes or no answer by typing Y
     * or N. Print their answer. */
    /*char input;

    //take user input
    //loop until the user says yes
    while (input != 'Y'){
        //Prompt user for input
        printf("Are you excited it is Friday?\n");
        input = getchar();
        if (input == 'N'){
            printf("Sorry to hear that.\n");
        } else if (input != 'Y'){
            printf("Sorry, try again with the correct input.\n");
        }
        getchar(); //consume the new line but don't store it anywhere
    }
    //print their input
    printf("Me too!");/*


    /* Write a segment of code that takes in two user-entered positive integers using scanf.
     * Raise the 1st integer to the power of the second. For example, if the
     * user enters 2 and then 3, compute 2^3. Print the result. */
    //declare variables to store input and result
    int input1;
    int input2;
    int result =1;
    int i=0;
    //promt user to input two integers in this format: 2 3
    printf("Type two integers with a space in between.");
    //scan user input
    scanf("%d %d", &input1, &input2);
    //compute the power - there are two ways to do this - a for loop or the power function - we will get into this later pow(2,3);
    for (i=0;i<input2;i++){
        result = result*input1;
    }
    //print the result
    printf("Our result of %d^%d is %d", input1, input2, result);

    /*When you have written the code, upload it to your
    * Grace account and test it using gcc 0102_challenge1.c and a.out. * */

    return 0;
}
