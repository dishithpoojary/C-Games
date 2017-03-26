#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

float theta,theta1;
int angle=0,time_min_int=0,copymin,j;
int angle1=0,time_sec_int=0,copysec,i;

char timemin[10]={'0'};
char timesec[10]={'0'};

void degree();
void time();

void main()
{

int gd=DETECT,gm;
int i,x,y,radius;//FOR CLOCK
int xs,ys;//FOR MINUTE HAND
int xm,ym;//FOR HOUR HAND



clrscr();

//Initialzing the values for clock
x=320;
y=240;
radius=100;

//Initialzing values for minute hand and seconds hand

angle=270;
angle1=270;
degree();

time_min_int=0;
time_sec_int=0;


initgraph(&gd,&gm,"C:\\TC\\BGI");

xm=x+(radius-40)*cos(theta1);
ym=y+(radius-40)*sin(theta1);



while(!kbhit())
{

xs=x+(radius-30)*cos(theta);
ys=y+(radius-30)*sin(theta);

circle(x,y,radius);
line(x,y,xs,ys);
line(x,y,xm,ym);

outtextxy(315,150,"12");
outtextxy(320,330,"6");
outtextxy(230,240,"9");
outtextxy(410,240,"3");

time();
outtextxy(260,360,"SAMAY:");
outtextxy(310,360,timemin);
outtextxy(325,360,":");
outtextxy(335,360,timesec);


angle=angle+6;
time_sec_int=time_sec_int+1;
time_sec_int=time_sec_int%60;
degree();

if((angle-270)%360==0)
{

angle1=angle1+6;
time_min_int=time_min_int+1;
degree();

xm=x+(radius-40)*cos(theta1);
ym=y+(radius-40)*sin(theta1);
}

delay(1000);
cleardevice();

}

getch();
closegraph();
}

void degree()
{

theta=(3.142/180.0)*angle;
theta1=(3.142/180.0)*angle1;

}

void time()
{
timesec[0]='0';
timesec[1]='\0';

/*SECONDS*/

copysec=time_sec_int;
i=0;

while(copysec!=0)
{
copysec=copysec/10;
i++;
}

copysec=time_sec_int;

while(copysec!=0)
{

timesec[i-1]=copysec%10+48;
copysec=copysec/10;
i--;
}

/*MINUTES*/

copymin=time_min_int;
j=0;

while(copymin!=0)
{

copymin=copymin/10;
j++;
}

copymin=time_min_int;

while(copymin!=0)
{

timemin[j-1]=copymin%10+48;
copymin=copymin/10;
j--;
}

}