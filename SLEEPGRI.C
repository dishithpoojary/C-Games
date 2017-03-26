#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>

void  main()
{

int level,c[1000],d[1000],i,j,k,l,x=39,y,z,p,r,q,s=0,t=599,u,v,w,m=33,n=27,o=21,e=593,f=587,g=581;
char a[1000],b[1000];
clrscr();

printf("\t\tsleepy star");
printf("\n\n\t\tWhats your name?");
scanf("%s",&b);
clrscr();
printf("How to play?\n1.)Just press any key and avoid the obstacles\nor press'q' to quit");
i=getch();
clrscr();
//printf("Select the level:\npress a number for tha level");
//scanf("%d",&level);
clrscr();
for(i=0;i<=799;i++)
{

a[i]=' ';

}

randomize();
r=rand();
q=r%10;

/*randomize();
r=rand();
u=r%10;

randomize();
r=rand();
v=r%10;

randomize();
r=rand();
w=r%10;
*/

//grid//



for(l=0,y=245;l<=10000;l++,x--,t--,y=y+40)
{

printf("\t\tsleepy %s your score:%d",b,s);
printf("\n\n\t\t ");

for(k=1;k<=40;k++)
{

printf("_");

}

k=0;
printf("\n\t\t");

//main

//build 1

for(p=0;p<=q;p++)
{

a[x+(p*40)]='#';

}

for(p=0;p<=q;p++)
{

a[x+(p*40)+1]=' ';

}

for(p=0;p<=(10-q);p++)
{

a[t-(p*40)]='#';

}

for(p=0;p<=(10-q);p++)
{

a[t-(p*40)+1]=' ';

}

/*
//build 2

for(p=0;p<=u;p++)
{

a[m+(p*40)]='#';

}

for(p=0;p<=u;p++)
{

a[m+(p*40)+1]=' ';

}

for(p=0;p<=(10-u);p++)
{

a[e-(p*40)]='#';

}

for(p=0;p<=(10-u);p++)
{

a[e-(p*40)+1]=' ';

}


//build 3
for(p=0;p<=v;p++)
{

a[n+(p*40)]='#';

}

for(p=0;p<=v;p++)
{

a[n+(p*40)+1]=' ';

}

for(p=0;p<=(10-v);p++)
{

a[f-(p*40)]='#';

}

for(p=0;p<=(10-v);p++)
{

a[f-(p*40)+1]=' ';

}

//build 4
for(p=0;p<=w;p++)
{

a[o+(p*40)]='#';

}

for(p=0;p<=w;p++)
{

a[o+(p*40)+1]=' ';

}

for(p=0;p<=(10-w);p++)
{

a[g-(p*40)]='#';

}

for(p=0;p<=(10-w);p++)
{

a[g-(p*40)+1]=' ';

}
    */

a[y]='*';
a[y-40]=' ';
a[y+40]=' ';

for(i=1;i<=15;i++)
{

printf("%c",179);

for(j=1;j<=40;j++)
{

printf("%c",a[k]);

k=k+1;

}

printf("%c",179);
printf("\n\t\t");

}

printf(" ");

for(k=1;k<=40;k++)
{

printf("_");

}

if(kbhit())
{

z=getch();

switch(z)
{

case 'q':goto label1;

default:
y=y-80;

}

}

if(o==0)
{

o=21;
w=581;

for(i=0;i<=799;i++)
{

a[i]=' ';

}
}
else if(n==0)
{

n=27;
v=587;

for(i=0;i<=799;i++)
{

a[i]=' ';

}
}
 else if(m==0)
{

m=33;
u=593;

for(i=0;i<=799;i++)
{

a[i]=' ';

}
} else if(x==0)
{

x=39;
t=599;

for(i=0;i<=799;i++)
{

a[i]=' ';

}

randomize();
r=rand();
q=r%10;


}

if(x==4)
{

s=s+1;

}
if((a[y+1]=='#')&&(a[y+41]=='#')||(a[y+1]=='#')&&(a[y-41]=='#'))
{
printf("\n\t\tout hogaya! ab so jaa");
delay(2000);
clrscr();
goto label1;
}
delay(150);
clrscr();
}
label1:
clrscr();
printf("\n\n\n\n\n\n\n\n\t\t\tyour score is %d",s);
getch();
}