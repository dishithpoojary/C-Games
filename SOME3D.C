#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
int x,y,radius;
clrscr();

x=320;
y=390;
radius=50;

initgraph(&gd,&gm,"C:\\TC\\BGI");

while(!kbhit())
{
setbkcolor(BLUE);


setcolor(GREEN);
line(0,300,280,240);
line(639,300,360,240);
line(280,240,360,240);
line(0,300,0,479);
line(639,300,639,479);
line(0,479,639,479);

setfillstyle(LTBKSLASH_FILL,GREEN);
floodfill(320,400,GREEN);

if(radius>=2)
{
setcolor(RED);
circle(x,y,radius);
setfillstyle(SOLID_FILL,RED);
floodfill(x,y,RED);
}

delay(500);
cleardevice();

if(y>=240)
{

radius=radius-2;
y=y-8;
}
}

getch();
closegraph();
}