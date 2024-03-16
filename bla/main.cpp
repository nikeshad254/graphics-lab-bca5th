#include <graphics.h>
#include <conio.h>

void drawLine(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int slope_one = 2 * dy;
    int slope_two = 2 * (dy - dx);
    int decision = 2 * dy - dx;
    int x, y, xEnd;

    if (x1 > x2) {
        x = x2;
        y = y2;
        xEnd = x1;
    } else {
        x = x1;
        y = y1;
        xEnd = x2;
    }

    putpixel(x, y, WHITE);

    while (x < xEnd) {
        x++;

        if (decision < 0)
            decision += slope_one;
        else {
            y++;
            decision += slope_two;
        }

        putpixel(x, y, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, ""); // Initialize graphics mode

    int x1 = 30, y1 = 30, x2 = 100, y2 = 200; // Starting and ending coordinates

    drawLine(x1, y1, x2, y2); 

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode

    return 0;
}

