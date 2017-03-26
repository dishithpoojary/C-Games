#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main(){

int gd=DETECT,gm,x=15,y=15,dirx=1,diry=1,vel=5,radius=10;
int rad_test,input,i,score=0,mode=0,copy,hit=0;
int y1=470,x1=250,y2=470,x2=370;

char scorechar[10]={'0'};

clrscr();

printf("\n\n\n\n\n\n\n\t\t\t");
printf("Select the mode:");
printf("\n\t\t\t1.)Basic\n\t\t\t2.)Expert\n\t\t\t3.)Ninja Expert");
mode=getche()-48;

switch(mode)
{
case 1:vel=4;
break;
case 2:vel=7;
break;
case 3:vel=9;
break;
default :vel=4;
break;
}

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

for(;;)
{
cleardevice();

x=x+dirx*vel;
y=y+diry*vel;

line(0,0,630,0);
line(0,0,0,470);
line(630,0,630,470);

outtextxy(480,40,"score");
outtextxy(480,50,scorechar);


line(x1,y1,x2,y2);

circle(x,y,radius);

if(kbhit())
{
input=getche();

switch(input)
{
case 'a':x1=x1-10;
	 x2=x2-10;
break;
case 'd':x1=x1+10;
	 x2=x2+10;
break;

case 'v': vel=vel+1;
break;
case 'b':vel=vel-1;
break;
case 'm': goto label1;
break;

}
}

if(x>=630-radius||x<=0+radius)
dirx=dirx*(-1);
if(y<=0+radius)
diry=diry*(-1);
if(y+radius>=470&&x1<=x&&x<=x2)
{
diry=diry*(-1);
hit=1;
}
else if(y-2*radius>=470)
break;



if(radius==30)
rad_test=1;
if(radius==10)
rad_test=0;

if(mode==3){
if(rad_test==0)
radius++;
else
radius--;
}

delay(30);

/*int to string*/

i=0;
while(copy!=0)
{
copy=copy/10;
i++;
}
copy=score;

while(copy!=0)
{
scorechar[i-1]=copy%10+48;
copy=copy/10;
i--;
}

if(hit==1)
{
score++;
hit=0;
}

copy=score;

}
label1:

cleardevice();
outtextxy(300,230,"SCORE:");
outtextxy(300,240,scorechar);

getch();
closegraph();
}
