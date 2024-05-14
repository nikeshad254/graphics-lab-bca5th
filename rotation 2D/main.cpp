#include <stdio.h>
#include <math.h>

// Function to apply rotation to a point (x, y) around a specified point (cx, cy)
void rotatePoint(float *x, float *y, float cx, float cy, float angle) {
    float newX = cx + (*x - cx) * cos(angle) - (*y - cy) * sin(angle);
    float newY = cy + (*x - cx) * sin(angle) + (*y - cy) * cos(angle);
    *x = newX;
    *y = newY;
}

int main() {
    int n, i;
    float angle, cx, cy;

    // Input the number of vertices of the shape
    printf("Enter the number of vertices of the shape: ");
    scanf("%d", &n);

    // Declare arrays to store x and y coordinates of the shape
    float x[n], y[n];

    // Input the coordinates of the shape
    printf("Enter the coordinates of the shape (x y): \n");
    for (i = 0; i < n; i++)
        scanf("%f %f", &x[i], &y[i]);

    // Input the center of rotation
    printf("Enter the coordinates of the center of rotation (cx cy): \n");
    scanf("%f %f", &cx, &cy);

    // Input the angle of rotation
    printf("Enter the angle of rotation in degrees: ");
    scanf("%f", &angle);

    // Convert angle from degrees to radians
    angle = angle * M_PI / 180;

    // Calculate the coordinates after rotation
    printf("Coordinates after rotation:\n");
    for (i = 0; i < n; i++) {
        rotatePoint(&x[i], &y[i], cx, cy, angle);
        printf("(%.2f, %.2f)\n", x[i], y[i]);
    }

    return 0;
}

