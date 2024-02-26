#include <iostream>
#include <graphics.h>
#include <cmath>

// Function to implement DDA algorithm
void drawLineDDA(int x1, int y1, int x2, int y2) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = float(dx) / float(steps);
    float yIncrement = float(dy) / float(steps);

    float x = x1;
    float y = y1;

    std::cout << "Points on the line using DDA algorithm:\n";
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xIncrement;
        y += yIncrement;
    }

    delay(5000); // Pause for 5 seconds before closing the window
    closegraph();
}

int main() {
    int x1, y1, x2, y2;

    std::cout << "Enter start point (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter end point (x2 y2): ";
    std::cin >> x2 >> y2;

    drawLineDDA(x1, y1, x2, y2);

    return 0;
}
