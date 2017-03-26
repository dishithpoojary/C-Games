#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>

int main()

{

int i,j,k=0,n,e,l,r,m;
char a[800],b[800],x;

clrscr();

label2:
e=0;
for(i=1;i<=20;i++)
{

for(j=1;j<=40;j++)
{

a[e]=' ';
e=e+1;

}

}

for(;k<799;k++)
{

printf("\t\t");

for(l=0;l<=41;l++)
{

printf("_");

}


printf("\n\t\t");

for(i=1;i<=20;i++)
{

printf("|");

for(j=1;j<=40;j++)
{

printf("%c",a[n]);
n=n+1;

}

printf("|");
printf("\n\t\t");

}


for(l=0;l<=41;l++)
{

printf("_");

}

if(kbhit())
{

x=getch();
switch(x)
{

case 's':goto label1;
break;

}


}


delay(100);
clrscr();

a[k]='X';
a[k+1]=a[k+2]=a[k+3]='X';
a[k-1]=' ';
n=0;

}


label1:

e=0;
for(i=1;i<=20;i++)
{

for(j=1;j<=40;j++)
{

a[e]=' ';
e=e+1;

}

}

for(;k<799;k=k+40)
{

printf("\t\t");

for(l=0;l<=41;l++)
{

printf("_");

}


printf("\n\t\t");

for(i=1;i<=20;i++)
{

printf("|");

for(j=1;j<=40;j++)
{

printf("%c",a[n]);
n=n+1;

}

printf("|");
printf("\n\t\t");

}


for(l=0;l<=41;l++)
{

printf("_");

}
if(kbhit())
{

x=getch();

switch(x)
{
case 'd': goto label2;
break;
case 'a':e=0;
for(i=1;i<=20;i++)
{

for(j=1;j<=40;j++)
{

a[e]=' ';
e=e+1;

}

}

for(;k>=-799;k--)
{

printf("\t\t");

for(l=0;l<=41;l++)
{

printf("_");

}


printf("\n\t\t");

for(i=1;i<=20;i++)
{

printf("|");

for(j=1;j<=40;j++)
{

printf("%c",a[n]);
n=n+1;

}

printf("|");
printf("\n\t\t");

}


for(l=0;l<=41;l++)
{

printf("_");

}
if(kbhit())
{

x=getch();

switch(x)
{
case 'w':
break;
case 's':goto label1;
break;


}

}

delay(100);
clrscr();

a[k+3]='X';
a[k+2]=a[k+1]=a[k]='X';
a[k+4]=' ';
n=0;
}

break;


}

}

delay(200);
clrscr();
a[k+3]='X';
a[k+43]=a[k+83]=a[k+123]='X';
a[k-37]=' ';
n=0;

}

/*e=0;
for(i=1;i<=20;i++)
{

for(j=1;j<=40;j++)
{

a[e]=' ';
e=e+1;

}

}

for(;k>=-799;k--)
{

printf("\t\t");

for(l=0;l<=41;l++)
{

printf("_");

}


printf("\n\t\t");

for(i=1;i<=20;i++)
{

printf("|");

for(j=1;j<=40;j++)
{

printf("%c",a[n]);
n=n+1;

}

printf("|");
printf("\n\t\t");

}


for(l=0;l<=41;l++)
{

printf("_");

}
if(kbhit())
{

x=getch();

switch(x)
{
case 'w':
break;
case 's':goto label1;
break;


}

}

delay(100);
clrscr();

a[k+3]='X';
a[k+2]=a[k+1]=a[k]='X';
a[k+4]=' ';
n=0;
}

 */



getch();

}




