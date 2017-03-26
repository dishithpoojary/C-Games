#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

			/*GLOBAL DECLARATIONS*/
int speedx,speedy,dirx,diry,mul;
int radius,x,y,xp,yp,test=0;
float accx,accy;

void main()
{

int gd=DETECT,gm;
clrscr();

x=40;
y=100;

printf("Enter the value of force:");
scanf("%d",&speedx);

radius=20;

//speedx=10;
speedy=10;

dirx=1;
diry=1;
mul=-1;

accx=1.0;
accy=1.0;

xp=-60;
yp=100;

initgraph(&gd,&gm,"C:\\TC\\BGI");

while(xp<=-40)
{

line(xp,yp,xp+60,yp);
line(xp+60,yp-20,xp+60,yp+20);

line(0,120,60,120);

circle(x,y,radius);

delay(50);
cleardevice();

xp++;
}

while(!kbhit())
{

line(0,120,60,120);
line(0,100,20,100);
line(20,80,20,120);

line(0,450,620,450);
line(620,0,620,450);
line(60,120,60,450);

circle(x,y,radius);

x=x+speedx*accx*dirx;

if(x>=80)
{

test=1;
y=y+speedy*diry*accy;

if(y+radius>=440||accy==0)
diry=diry*mul;

if(diry==1)
accy=accy+0.5;
else
accy=accy-0.5;
}

if(x>=610)
dirx=dirx*mul;


accx=accx-0.0055;


delay(100);
cleardevice();
}



getch();
closegraph();
}