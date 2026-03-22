#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setcolor(RED);
    setlinestyle(SOLID_LINE, 0, 3);
    line(50, 50, 300, 50);

    setcolor(BLUE);
    setlinestyle(DOTTED_LINE, 0, 3);
    line(50, 100, 300, 100);

    setcolor(GREEN);
    setlinestyle(DASHED_LINE, 0, 3);
    line(50, 150, 300, 150);

    setcolor(YELLOW);
    setlinestyle(CENTER_LINE, 0, 3);
    line(50, 200, 300, 200);

    setfillstyle(SOLID_FILL, RED);
    bar(350, 50, 450, 120);

    setfillstyle(LINE_FILL, BLUE);
    bar(350, 130, 450, 200);

    setfillstyle(HATCH_FILL, GREEN);
    bar(350, 210, 450, 280);

    setfillstyle(XHATCH_FILL, CYAN);
    bar(350, 290, 450, 360);

    getch();
    closegraph();

    return 0;
}