#include <stdio.h>
#include <graphics.h>

// Function to perform translation
void translate(int *x1, int *y1, int *x2, int *y2, int tx, int ty) {
    *x1 += tx;
    *y1 += ty;
    *x2 += tx;
    *y2 += ty;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2; // Starting and ending points
    int tx, ty;         // Translation distances

    // Input starting points (X1,Y1), ending points (X2,Y2), and translation distances tx, ty
    printf("Enter starting point (X1 Y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter ending point (X2 Y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter translation distance (tx ty): ");
    scanf("%d %d", &tx, &ty);

    // Draw the original line
    line(x1, y1, x2, y2);

    // Perform translation
    translate(&x1, &y1, &x2, &y2, tx, ty);

    // Draw the translated line
    line(x1, y1, x2, y2);

    // Output translated points
    printf("Translated starting point: (%d, %d)\n", x1, y1);
    printf("Translated ending point: (%d, %d)\n", x2, y2);

    getch();
    return 0;
}

