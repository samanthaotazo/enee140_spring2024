/*Given an integer array a[8] = {2, 3, 5, 7, 11, 13, 17, 19}, read three integers k, m, and
x from the terminal. When k is a valid array index (i.e., between 0 and 7), remove a[k] from the
array by shifting all the elements from k+1 to the end of the array one place to the left (so that
a[k] takes the value of the old a[k+1], a[k+1] takes the value of the old a[k+2], etc.). Then,
if m is a valid array index, insert integer x on position m of the array and shift the elements from
m+1 to the end of the array one place to the right (so that a[m+1] takes the value of the old a[m],
a[m+2] takes the value of the old a[m+1], etc.).
 Created 20 November by Samantha Otazo */

#include <stdio.h>

void printArray(int arr[]);

int main(){
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int k,m,x;
    int temp, index;
    printf("Enter 3 integers k, m, and x:\t");
    scanf("%d %d %d", &k, &m, &x);

    //Safety Check K between 0 and 7
    if (k < 0 || k > 7){
        printf("K must be between 0 and 7");
        return 0;
    }

    //remove a[k] from the array and shift all elements left
    for (index = k;index < 7;index++){
        a[index] = a[index+1];
    }
    printf("After removing a[k]:\n");
    printArray(a);


    //Safety Check K between 0 and 7
    if (m < 0 || m > 7){
        printf("M must be between 0 and 7");
        return 0;
    }
    //if m is a valid array index, insert integer x on position m of the array
    for (;;){}
    return 0;
}
void printArray(int arr[]){
    int index;
    for (index = 0;index < 8;index++){
        printf("\tA[%d] = %d\n", index, arr[index]);
    }
}
