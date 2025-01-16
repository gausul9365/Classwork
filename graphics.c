#include <graphics.h>
#include <conio.h>

void drawIndianFlag() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); // Initialize graphics mode

    // Coordinates of the flagpole
    int flagPoleX = 100, flagPoleY = 50, flagPoleHeight = 400;

    // Draw the flagpole
    setcolor(WHITE);
    line(flagPoleX, flagPoleY, flagPoleX, flagPoleY + flagPoleHeight);
    rectangle(flagPoleX - 5, flagPoleY + flagPoleHeight, flagPoleX + 5, flagPoleY + flagPoleHeight + 50);
    floodfill(flagPoleX, flagPoleY + flagPoleHeight + 25, WHITE);

    // Dimensions for the flag
    int flagWidth = 200, flagHeight = 50;

    // Saffron color (top rectangle)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    rectangle(flagPoleX, flagPoleY, flagPoleX + flagWidth, flagPoleY + flagHeight);
    floodfill(flagPoleX + 1, flagPoleY + 1, RED);

    // White color (middle rectangle)
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(flagPoleX, flagPoleY + flagHeight, flagPoleX + flagWidth, flagPoleY + 2 * flagHeight);
    floodfill(flagPoleX + 1, flagPoleY + flagHeight + 1, WHITE);

    // Green color (bottom rectangle)
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(flagPoleX, flagPoleY + 2 * flagHeight, flagPoleX + flagWidth, flagPoleY + 3 * flagHeight);
    floodfill(flagPoleX + 1, flagPoleY + 2 * flagHeight + 1, GREEN);

    // Draw the Ashoka Chakra (circle)
    int chakraX = flagPoleX + flagWidth / 2;
    int chakraY = flagPoleY + flagHeight + flagHeight / 2;
    int chakraRadius = 20;
    setcolor(BLUE);
    circle(chakraX, chakraY, chakraRadius);
    for (int i = 0; i < 24; i++) {
        float angle = i * (360 / 24) * 3.14 / 180; // Convert degrees to radians
        int x = chakraX + chakraRadius * cos(angle);
        int y = chakraY - chakraRadius * sin(angle);
        line(chakraX, chakraY, x, y);
    }

    // Wait for user input and close the graphics mode
    getch();
   // closegraph();
}

int main() {
    drawIndianFlag();
    return 0;
}
