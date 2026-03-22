#include <graphics.h>

int main()
{
	int gm, gd = DETECT;
	initgraph(&gd, &gm, NULL);

	line(100, 100, 200, 200);

	getch();
	closegraph();
	return 0;
}