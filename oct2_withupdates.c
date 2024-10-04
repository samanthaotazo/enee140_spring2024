/*We will use the & operator, which returns true
 * only if both bits are 1*/

#include <stdio.h>

int main() {
    //I have defined 18 as the number i want to work with today
    int number = 18; //We know to be 10010

    //Note that our leftmost bit is 2^4 = 16
    printf("For 5 bits, ");
    //we use bitwise operators with an if statement to return 0 for false or some non-zero for true
    if (number & 16){ //When we compare 10010 and 10000 we see that the rightmost bit matches
        //2^4 will match
        printf("%d's leftmost bit 1\n", number);
    } else {
        printf("%d's leftmost bit is 0\n", number);
    }

    if (number & 1){ //1 is just 2^0
        //number is 10010 and 1 is 00001
        printf("\t\t\t%d's rightmost bit is 1\n", number);
    } else {
        printf("\t\t\t%d's rightmost bit is 0\n", number);
    }

    //Bit shifting
    // Left shift <<
    // Right shift >>
    int i;
    int hasaonebeenprinted = 0;
    //For our 5 bit example, we want to look at each bit indivually starting from the rightmost bit
    //From before, our number is 18
    for (i = 0; i<8;i++){
        //We will use & to determine what is at our rightmost bit or 2^4 slot
        if (number & 128){
            hasaonebeenprinted =1;
            printf("1");
        } else {
            if (hasaonebeenprinted == 1) {
                printf("0");
            }
        }
        number = number << 1;
    }

    return 0;

}
