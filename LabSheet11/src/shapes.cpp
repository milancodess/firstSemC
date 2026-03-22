#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    line(50, 50, 200, 50);

    rectangle(50, 100, 200, 200);

    circle(300, 150, 50);

    ellipse(450, 150, 0, 360, 80, 40);

    getch();
    closegraph();

    return 0;
}