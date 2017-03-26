#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

void radians();
void orbit();

int xp,yp,angle;
int xp1,yp1,angle1;
int xp2,yp2,angle2;

float theta,radius;
float theta1,radius1;
float theta2,radius2;

void main()
{

int gd=DETECT,gm;

clrscr();

xp=320;
yp=140;
angle=270;

xp1=320;
yp1=130;
angle1=270;

xp2=320;
yp2=170;
angle2=270;

initgraph(&gd,&gm,"C:\\TC\\BGI");


while(!kbhit())
{

radians();

//planet1
xp1=320+(250)*cos(theta1);
yp1=260+(130)*sin(theta1);
angle1=angle1+2;
radius1=sin(theta1)*15+17;

//planet2
xp=320+(200)*cos(theta);
yp=240+(100)*sin(theta);
angle=angle+3;
radius=sin(theta)*15+20;

//planet3
xp2=320+(150)*cos(theta2);
yp2=220+(70)*sin(theta2);
angle2=angle2+4;
radius2=sin(theta2)*12+15;

setcolor(WHITE);

//planet 1
ellipse(320,260,0,360,250,130);
setcolor(3);
circle(xp1,yp1,radius1);
setfillstyle(SOLID_FILL,3);
floodfill(xp1,yp1,3);

setcolor(WHITE);
//planet 2
ellipse(320,240,0,360,200,100);
setcolor(6);
circle(xp,yp,radius);
setfillstyle(SOLID_FILL,6);
floodfill(xp,yp,6);

setcolor(WHITE);
//planet 3
ellipse(320,220,0,360,150,70);
setcolor(8);
circle(xp2,yp2,radius2);
setfillstyle(SOLID_FILL,8);
floodfill(xp2,yp2,8);

//sun
setcolor(YELLOW);
circle(320,210,50);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(320,210,YELLOW);

delay(500);
cleardevice();
}

getch();
closegraph();
}

void radians()
{

theta=(3.142*angle)/180.0;
theta1=(3.142*angle1)/180.0;
theta2=(3.142*angle2)/180.0;
}
