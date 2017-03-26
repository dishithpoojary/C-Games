#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

int x,y,i;
float u;

//control points
int xc1,yc1,xc2,yc2,xc3,yc3,xc4,yc4,radius;

void bezier();
void initialize();
void fishopen();
void fishclose();
void movefish();

void main()
{
int gd=DETECT,gm,count=0;
clrscr();

initialize();

initgraph(&gd,&gm,"C:\\TC\\BGI");

while(!kbhit())
{

if(count%2==0)
fishopen();
else
fishclose();

delay(500);
cleardevice();
movefish();
count++;
}

getch();
closegraph();
}


void bezier(x1,y1,x2,y2,x3,y3,x4,y4)
{

u=0.0;

while(u<=1)
{

x=pow((1-u),3)*x1+3*u*pow((1-u),2)*x2+3*u*u*(1-u)*x3+x4*u*u*u;
y=pow((1-u),3)*y1+3*u*pow((1-u),2)*y2+3*u*u*(1-u)*y3+y4*u*u*u;
putpixel(x,y,15);
u=u+0.001;
}
}

void initialize()
{

xc1=150;
yc1=200;
xc2=170;
yc2=260;
xc3=270;
yc3=240;
xc4=400;
yc4=150;
}

void fishopen()
{

bezier(xc1,yc1,xc2,yc2,xc3,yc3,xc4,yc4);
bezier(xc1,yc1-50,xc2,yc2-170,xc3,yc3-130,xc4,yc4+50);

radius=5;
line(xc1,yc1,xc1+30,yc1-25);
line(xc1,yc1-50,xc1+30,yc1-25);
line(xc4,yc4,xc4,yc4+50);
circle(xc1+20,yc1-50,radius);

}

void movefish()
{

xc1=xc1-10;
xc2=xc2-10;
xc3=xc3-10;
xc4=xc4-10;
}

void fishclose()
{

bezier(xc1,yc1-25,xc2,yc2,xc3,yc3,xc4,yc4);
bezier(xc1,yc1-25,xc2,yc2-170,xc3,yc3-130,xc4,yc4+50);

radius=2;
line(xc1,yc1-25,xc1+30,yc1-25);
line(xc4,yc4,xc4,yc4+50);
circle(xc1+20,yc1-50,radius);
radius=2;
}