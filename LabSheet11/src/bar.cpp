#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, BLUE);
    bar(50, 300, 100, 200);

    setfillstyle(SOLID_FILL, RED);
    bar(120, 300, 170, 150);

    setfillstyle(SOLID_FILL, GREEN);
    bar(190, 300, 240, 180);

    setfillstyle(SOLID_FILL, YELLOW);
    bar(260, 300, 310, 100);

    getch();
    closegraph();

    return 0;
}