#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void func(int a[10][10]);
int main()
{
int i,j,k,r,a[10][10],m,x,y,z,s,u=1;
char n,b[100],c[100],d[100],e[100];
clrscr();

for(i=1,m=0;i<=10;i++)
{
for(j=1;j<=10;j++)
{
b[m]=c[m]=d[m]=e[m]=' ';
m=m+1;
}
}

printf("\n\n\t\t");
//3
b[13]=b[14]=b[15]=b[16]=b[26]=b[36]=b[46]=b[56]=b[66]=b[76]=b[44]=b[45]=b[74]=b[75]=b[73]='*';
//0
c[14]=c[15]=c[23]=c[33]=c[43]=c[53]=c[63]=c[26]=c[36]=c[46]=c[56]=c[66]=c[74]=c[75]='*';
//7
e[12]=e[14]=e[15]=e[13]=e[16]=e[26]=e[36]=e[46]=e[56]=e[66]=e[76]='*';
//2
d[23]=d[14]=d[15]=d[26]=d[36]=d[45]=d[54]=d[63]=d[72]=d[73]=d[74]=d[75]=d[76]='*';

for(i=1,m=0,y=0,x=0,z=0;i<=10;i++)
{
for(j=1;j<=10;j++)
{
printf("%c",b[m]);
m=m+1;
}
delay(200);
for(j=1;j<=10;j++)
{
printf("%c",c[x]);
x=x+1;
}
delay(200);
for(j=1;j<=10;j++)
{
printf("%c",e[y]);
y=y+1;
}
delay(200);
for(j=1;j<=10;j++)
{
printf("%c",d[z]);
z=z+1;
}

printf("\n\t\t");
}

delay(500);
system("cls");
printf("\n\n\n\n\n\t\t\t\tLets play");
delay(1000);
clrscr();

for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
a[i][j]=' ';
}
}

randomize();
r=rand()%17;
switch(r)
{
case 1:i=0,j=0;
break;
case 2:i=0,j=1;
break;
case 3:i=0,j=2;
break;
case 4:i=0,j=3;
break;
case 5:i=1,j=0;
break;
case 6:i=1,j=1;
break;
case 7:i=1,j=2;
break;
case 8:i=1,j=3;
break;
case 9:i=2,j=0;
break;
case 10:i=2,j=1;
break;
case 11:i=2,j=2;
break;
case 12:i=2,j=3;
break;
case 13:i=3,j=0;
break;
case 14:i=3,j=1;
break;
case 15:i=3,j=2;
break;
case 16:i=3,j=3;
break;
}
a[i][j]=3;

//mainloop
for(k=0;k<=10000;k++)
{
label1:
r=rand()%17;
switch(r)
{
case 1:i=0,j=0;
break;
case 2:i=0,j=1;
break;
case 3:i=0,j=2;
break;
case 4:i=0,j=3;
break;
case 5:i=1,j=0;
break;
case 6:i=1,j=1;
break;
case 7:i=1,j=2;
break;
case 8:i=1,j=3;
break;
case 9:i=2,j=0;
break;
case 10:i=2,j=1;
break;
case 11:i=2,j=2;
break;
case 12:i=2,j=3;
break;
case 13:i=3,j=0;
break;
case 14:i=3,j=1;
break;
case 15:i=3,j=2;
break;
case 16:i=3,j=3;
break;
}
if(a[i][j]!=' ')
{
goto label1;
}
else
{
a[i][j]=3;
}

func(a);
//mainaction
n=getch();
switch(n)
{
case 'w':
//together
for(s=0;s<=2;s++)
{
for(j=0;j<=3;j++)
{
for(i=3;i>=1;i--)
{
if(a[i][j]!=' ')
{
if(a[i-1][j]==' ')
{
a[i-1][j]=a[i][j];
a[i][j]=' ';
}
}
}
}
}
//combine
for(j=0;j<=3;j++)
{
for(i=0;i<=3;i++)
{
if(a[i][j]!=' ')
{
if(a[i+1][j]==a[i][j])
{
a[i][j]=2*a[i][j];
a[i+1][j]=' ';
}
}
}
}
//togetheragain

for(s=0;s<=2;s++)
{
for(j=0;j<=3;j++)
{
for(i=3;i>=1;i--)
{
if(a[i][j]!=' ')
{
if(a[i-1][j]==' ')
{
a[i-1][j]=a[i][j];
a[i][j]=' ';
}
}
}
}
}
break;
case 'd':
//together
for(s=0;s<=2;s++)
{
for(i=0;i<=3;i++)
{
for(j=0;j<=2;j++)
{
if(a[i][j]!=' ')
{
if(a[i][j+1]==' ')
{
a[i][j+1]=a[i][j];
a[i][j]=' ';
}
}
}
}
}
//combine
for(i=0;i<=3;i++)
{
for(j=3;j>=0;j--)
{
if(a[i][j]!=' ')
{
if(a[i][j-1]==a[i][j])
{
a[i][j]=2*a[i][j];
a[i][j-1]=' ';
}
}
}
}
//togehteragain
for(s=0;s<=2;s++)
{
for(i=0;i<=3;i++)
{
for(j=0;j<=2;j++)
{
if(a[i][j]!=' ')
{
if(a[i][j+1]==' ')
{
a[i][j+1]=a[i][j];
a[i][j]=' ';
}
}
}
}
}
break;
case 's':
//together
for(s=0;s<=2;s++)
{
for(j=0;j<=3;j++)
{
for(i=0;i<=2;i++)
{
if(a[i][j]!=' ')
{
if(a[i+1][j]==' ')
{
a[i+1][j]=a[i][j];
a[i][j]=' ';
}
}
}
}
}
//combine
for(j=0;j<=3;j++)
{
for(i=3;i>=0;i--)
{
if(a[i][j]!=' ')
{
if(a[i-1][j]==a[i][j])
{
a[i][j]=2*a[i][j];
a[i-1][j]=' ';
}
}
}
}
//togetheragain
for(s=0;s<=2;s++)
{
for(j=0;j<=3;j++)
{
for(i=0;i<=2;i++)
{
if(a[i][j]!=' ')
{
if(a[i+1][j]==' ')
{
a[i+1][j]=a[i][j];
a[i][j]=' ';
}
}
}
}
}
break;
case 'a':
//together
for(s=0;s<=2;s++)
{
for(i=0;i<=3;i++)
{
for(j=3;j>=1;j--)
{
if(a[i][j]!=' ')
{
if(a[i][j-1]==' ')
{
a[i][j-1]=a[i][j];
a[i][j]=' ';
}
}
}
}
}
//combine
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
if(a[i][j]!=' ')
{
if(a[i][j+1]==a[i][j])
{
a[i][j]=2*a[i][j];
a[i][j+1]=' ';
}
}
}
}
//togetheragain
for(s=0;s<=2;s++)
{
for(i=0;i<=3;i++)
{
for(j=3;j>=1;j--)
{
if(a[i][j]!=' ')
{
if(a[i][j-1]==' ')
{
a[i][j-1]=a[i][j];
a[i][j]=' ';
}
}
}
}
}

break;
case 'm':goto label2;
break;
}

for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
if(a[i][j]==3072&&u==1)
{
printf("\n\ncongratulations you won!\n\n\n\t\t\twould like to continue(y/n)");
i=getch();
u=0;
if(i=='y')
{
printf("ok..play then");
}
else
{
printf("ok..bye then");
break;
}
}
}
}

clrscr();

func(a);

clrscr();
}
label2:
getch();
}


void func(int a[10][10])
{
int i,j;
printf("\n\n\n\n\t\t\t");
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
if(a[i][j]==' ')
{
printf("[%c   ]",a[i][j]);
}
else
{
printf("[%d   ",a[i][j]);
if(a[i][j]>=10)
{
printf("\b");
}
if(a[i][j]>=100)
{
printf("\b");
}
if(a[i][j]>=1000)
{
printf("\b");
}
printf("]");
}
}
printf("\n\t\t\t");
}
}