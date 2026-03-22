#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm, i;

    initgraph(&gd, &gm, "");

    for (i = 0; i < 500; i++)
    {
        cleardevice();

        // Body of car
        rectangle(50 + i, 300, 200 + i, 350);
        rectangle(100 + i, 250, 170 + i, 300);

        // Wheels
        circle(90 + i, 360, 20);
        circle(160 + i, 360, 20);

        delay(10);
    }

    getch();
    closegraph();

    return 0;
}