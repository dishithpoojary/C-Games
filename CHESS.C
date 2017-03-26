#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void dda();
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	dda(100,50,500,450);
	dda(100,450,500,450);
	dda(100,50,500,450);
	dda(500,50,500,450);
	getch();
	closegraph();
}
void dda(int x1,int y1,int x2,int y2)
{
	int dx,dy,steps,i=0;
	float x,y;
	float xi,yi;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	steps=abs(dx);
	else
	steps=abs(dy);
	xi=dx/(float)steps;
	yi=dy/(float)steps;
	x=x1;
	y=y1;
	putpixel(x,y,WHITE);
	for(i=0;i<steps;i++)
	{
		x=x+xi;
		y=y+yi;
		putpixel(x,y,WHITE);
	}
}

