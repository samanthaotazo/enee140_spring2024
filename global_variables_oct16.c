/*Today, we will investigate how global variables
 *differ from local variables.
 * Created 15 October by Samantha Otazo. */
#include <stdio.h>
int c = 4; //our global variable

void add_1(void);
void add_2(int input);
int add_3(void);

int main(void) {
    printf("C is %d\n", c);
    
    add_1();
    //printf("C is %d after add_1\n", c);

    add_2(c);
    //printf("C is %d after add_2\n",c);

    //printf("add_3 returns %d and c is %d", add_3(), c);
    return 0;
}
void add_1 (void){
    c += 1;
}
void add_2(int input){
    input += 1;
}
int add_3(void){
    c += 3;
    return c;
}
