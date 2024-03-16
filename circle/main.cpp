#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    int x = 130, y = 130, radius = 100; // Center coordinates and radius

    initgraph(&gd, &gm, ""); // Initialize graphics mode
    setcolor(YELLOW); // Set color for the circle

    // Draw a circle
    circle(x, y, radius);

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode
    return 0;
}

