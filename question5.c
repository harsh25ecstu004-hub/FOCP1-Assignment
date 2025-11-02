#include <stdio.h>

int main() {
    float x, y;

    // Input coordinates
    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    // Determine the quadrant or axis
    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in Quadrant I.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in Quadrant II.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in Quadrant III.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in Quadrant IV.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%.2f, %.2f) lies at the Origin.\n", x, y);
    else if (x == 0)
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    else if (y == 0)
        printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);

    return 0;
}