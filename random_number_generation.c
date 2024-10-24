#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int min = 1;
    int max = 8;
    /*General formula for random number generation:
    *(smallest # to generate) + rand() % (# to generate +1);
    */

    //Generate a random number between 0 and max
    printf("Number between 0 and max is %d\n", rand() % (max+1));

   //Generate a random number between minimum and maximum
    printf("Number between min and max is %d\n", min + rand() % (max-min+1));

   //Generate a random float between 0 and 1
   printf("Random float between 0 and 1 is %f\n", (float)rand()/RAND_MAX);

   //Generate a random float between 0 and max
   printf("Random float between 0 and max is %f", max*(float)rand()/RAND_MAX);
   return 0;
}
