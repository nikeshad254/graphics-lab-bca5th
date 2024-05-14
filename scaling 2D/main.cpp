#include <stdio.h>

// Function to apply scaling to a point (x, y)
void scalePoint(float *x, float *y, float scaleX, float scaleY) {
    *x *= scaleX;
    *y *= scaleY;
}

int main() {
    int n, i;
    float scaleX, scaleY;

    // Input the number of vertices of the shape
    printf("Enter the number of vertices of the shape: ");
    scanf("%d", &n);

    // Declare arrays to store x and y coordinates of the shape
    float x[n], y[n];

    // Input the coordinates of the shape
    printf("Enter the coordinates of the shape (x y): \n");
    for (i = 0; i < n; i++)
        scanf("%f %f", &x[i], &y[i]);

    // Input the scaling factors
    printf("Enter the scaling factors (scaleX scaleY): ");
    scanf("%f %f", &scaleX, &scaleY); 

    // Apply scaling to each vertex
    printf("Coordinates after scaling:\n");
    for (i = 0; i < n; i++) {
        scalePoint(&x[i], &y[i], scaleX, scaleY);
        printf("(%.2f, %.2f)\n", x[i], y[i]);
    }

    return 0;
}

