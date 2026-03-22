#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    circle(300, 200, 100);

    circle(260, 170, 10);
    circle(340, 170, 10);

    arc(300, 210, 200, 340, 50);

    getch();
    closegraph();

    return 0;
}