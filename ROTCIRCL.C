#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
int gd=DETECT,gm,i,x,y,radius; //co-ordinated of the bigger circle and its radius.
int x_new,y_new,radius_new;//co-ordinates of the roating circle and its radius.
float theta;

clrscr();

//initialzing the radii
radius=50;
radius_new=20;

//initializing the co-ordinates of the bigger circle
x=300;
y=200;

//initializing the co-ordinates of the roating circle.
theta=0.0;

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

while(!kbhit())
{
x_new=x+(radius+radius_new)*cos(theta);
y_new=y+(radius+radius_new)*sin(theta);

circle(x,y,radius);
circle(x_new,y_new,radius_new);
//ellipse(10,30,20,10,0,360);

theta=theta+0.01;

delay(50);
cleardevice();
}





getch();
closegraph();
}