/*Print the intersections of a circle with radius of user input
 * with the x and y axis, starting from the positive y axis and moving clockwise.
 * Created 4 October 2024 by Sam Otazo*/


#include <stdio.h>
#include <math.h>

int main() {
    float angle = M_PI/2;
    int radius;
    int count = 0;

    printf("Give me a radius: \n");
    scanf("%d", &radius);
    
    for (count = 0; count < 4; count++){
        printf("Our %d position is at (%.2f, %.2f)\n", count +1, radius * cos(angle - (M_PI/2)* count), radius * sin(angle - M_PI / 2 * count));
    }
    return 0;
}
