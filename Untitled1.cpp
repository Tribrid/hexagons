#include <stdio.h>
#include <conio.h>
#include <winbgim.h>
int main()
{
  int gd=DETECT, gm;
	int octagon[18]= {350,300,297,247,297,172,350,119,425,119,478,172,478,247,425,300,350,300};
	int octago[18]= {260,300,207,247,207,172,260,119,335,119,388,172,388,247,335,300,260,300};
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cleardevice();
	drawpoly(9,octago);
	drawpoly(9,octagon);
	getch();
	closegraph();

}


