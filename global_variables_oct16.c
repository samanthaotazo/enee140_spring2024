/*Today, we will investigate how manipulating global variables
 *differs from regular variables.
 * Created 15 October by Samantha Otazo. */
#include <stdio.h>
int c = 4; //our global variable, declared outside of main

void add_1(void);
void add_2(int input);
int add_3(void);

int main(void) {
    printf("C is %d\n", c); //find our initial value of C

    add_1();
    printf("C is %d after add_1\n", c); //this successfully modifies c

    add_2(c); //pass in c as my input
    printf("C is %d after add_2\n",c);//this does NOT change c

    printf("add_3 returns %d and c is", add_3());
    printf(" %d", c);
    return 0;
}
void add_1 (void){
    //if we are to create some
    //int c = 60; //this causes a bug
    c += 1; //add one to our global variable c
    //don't return anything
}
void add_2(int input){
    int c = 15; //this is a "new" variable, not our global c. This does nothing
    input += 1; //add one to input but don't return input
}
int add_3(void){
    c += 3; //modify c
    return c; //returning modified value of c
}
