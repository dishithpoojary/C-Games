#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main(){
int gd=DETECT,gm,x=50,y=50,dirx=1,diry=1,vel=1,radius=10,rad_test,input,i;
clrscr();
initgraph(&gd,&gm,"");

for(;;)
{

cleardevice();

x=x+dirx*vel;
y=y+diry*vel;

line(0,0,630,0);
line(0,0,0,470);
line(630,0,630,470);

circle(x,y,radius);

if(kbhit())
{
input=getche();

switch(input)
{
case 'w':if(diry==-1)
		dirx=0;
	 diry=-1;
break;
case 'a':if(dirx==-1)
		diry=0;
	 dirx=-1;
break;
case 's':if(diry==1)
		dirx=0;
	 diry=1;
break;
case 'd':if(dirx==1)
		diry=0;
	 dirx=1;
break;
case 'm':goto label1;
break;

case 'v': vel=vel+1;
break;
case 'b':vel=vel-1;
break;

}
}
if(x>=630-radius||x<=0+radius)
dirx=dirx*(-1);
if(y<=0+radius)
diry=diry*(-1);
if(y>=630-radius)
break;

if(radius==30)
rad_test=1;
if(radius==10)
rad_test=0;

if(rad_test==0)
radius++;
else
radius--;

delay(30);

}
label1:
getch();
closegraph();
}