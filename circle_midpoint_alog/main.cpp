#include <stdio.h>
#include <graphics.h>

// Function to draw a circle using Mid-Point Circle Drawing Algorithm
void drawCircle(int xc, int yc, int radius) {
    int x = 0;
    int y = radius;
    int p = 1 - radius; // Initial decision parameter

    // Plot the initial point
    putpixel(xc + x, yc - y, WHITE);

    // Mid-point Circle Drawing Algorithm
    while (x < y) {
        x++;

        if (p < 0)
            p += 2 * x + 1;
        else {
            y--;
            p += 2 * (x - y) + 1;
        }

        // Plot points using symmetry
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    int xc, yc, radius;

    printf("Enter center coordinates (Xc Yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter radius: ");
    scanf("%d", &radius);

    initgraph(&gd, &gm, ""); // Initialize graphics mode

    drawCircle(xc, yc, radius); // Call the function to draw the circle

    getch();
    closegraph(); // Close graphics mode

    return 0;
}

