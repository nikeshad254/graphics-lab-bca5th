#include <graphics.h>
#include <conio.h> 

int main() {
    int gd = DETECT, gm;
    int x1 = 30, y1 = 30, x2 = 100, y2 = 100; // Starting and ending coordinates

    initgraph(&gd, &gm, ""); // Initialize graphics mode

    // Draw a line
    line(x1, y1, x2, y2);

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode
    return 0;
}

