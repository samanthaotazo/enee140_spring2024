/* This excercise tests your ability to read code and determine the correct output.
 * Created 9 October by Samantha Otazo */
#include <stdio.h>

int function_1 (int a);
void function_2(float b);
int main(void) {
    int i = 0;
    int a = 9;
    float b = 5.4;
    float c = 1.8;
    
    for (;i < 5; i++){
        b++;
    }
    printf("B after the for loop is %.3f", b);
    c = c/a;
    printf("C after the c/a is %.3f", c);
    
    function_1(a);
    printf("A after function_1 is %d", a);
    printf("B after function_1 is %.3f", b);
    
    printf("A++ is %d and ++b is %d", a++, ++b);
    printf("A is now %d", a);
    
    for (i = 0; i <= 5;b++, i++){
    }
    
    printf("B is now %d", b);
    return 0;
}
int function_1 (int a){
    while (a ! = 1){
        a--;
    }
    
    return a;
}
void function_2(float b){
    b = b + 1.5;
}
