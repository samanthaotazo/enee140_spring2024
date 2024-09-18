/* Create a function add that adds two inputs and a function
 * that takes half of an input. Pay attention to variable types.
 *
 * Created on September 18th by Samantha Otazo
 * */
#include <stdio.h>

//declare our functions and specify their type and inputs
int add (int number1, int number2);
float halve (int input);

int main(void) {
    int result1;
    float result2;

    //call our functions in main and pass in arbitrary values
    result1= add(10,6);
    result2 = halve(7);

    
    //print our results
    printf("Result of adding is %d", result1);
    printf("\nResult of halving is %.2f", result2);
    return 0;
}

int add (int number1, int number2){
    //declare a variable to store our result
    int result;
    
    result = number1 + number2;
    //return our value
    return result;
}
float halve (int input){
    /*float result;

    result = input/2.0; //use 2.0 to perform floating type arithmetic

    return result;*/
    
    
    
    //alternatively, we can use the line below to perform the above operations in one step.
    return input/2.0;
}
