/* This is practice basic array navigation.
 * Created 11 October by Samantha Otazo. */

#include <stdio.h>
int global_c = 5;

void print_array(int array[], int length);
int add_1(int a);
void add_1_array(int array[], int length);

int main() {
    int variable;
    int array[7] = {4,5,3,4,5,8,7}; //an array with known length of 7 elements
    char char_array[] = {'l','r', 'o','\0'};
    int arr_index;
    int b = 7;


    //what happens if we access an out of range element?
    //printf("Array at index -1 is %d\n", array[-1]);  //this gives junk

    //Now let's take an array and modify it so all the numbers are even.
    //If the array is an odd number, we will add one.
    /*for (arr_index = 0;arr_index<= 6;arr_index++){
        if ((array[arr_index] % 2) == 1){ //alterantively, we could check != 0
            array[arr_index] += 1;
        }
    }
    print_array(array, 7); //our function*/

    //Let's find the size of our char array
    for (arr_index = 0; char_array[arr_index] != '\0'; arr_index++){
        printf("looping...");
    }
    printf("\nOur array has length %d", arr_index +1);

    //Let's look at modifying variables versus arrays in functions
    add_1(b);
    printf("\nb after add_1 is %d", b); // we can see that a is still 7 -> this proves that functions operate on a copy of a variable
    b = add_1(6);
    printf("\nb after b = add_1 is %d\n",b);
    add_1_array(array, 7);
    print_array(array, 7);

    return 0;
}
void print_array(int array[], int length){
        int arr_index;
        //Print an array
        for (arr_index = 0;arr_index < length; arr_index++){
            printf("Array at index %d is %d\n", arr_index, array[arr_index]);
        }
}

int add_1(int a){
    a = a+1;
    printf("\na within add_1 is %d", a);
    return 0;
}
void add_1_array(int array[], int length){
    int arr_index;
    for (arr_index = 0;arr_index < length; arr_index++){
        array[arr_index] += 1;
    }
}
