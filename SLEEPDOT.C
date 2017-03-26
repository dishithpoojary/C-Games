#include<conio.h>
#include<stdio.h>

void main()
{

int i,j=0,k;
char a[100],b,c;
clrscr();
printf("Enter a sentence:");

for(i=0;i<100;i++)
{

a[i]=getche();

if(a[i]=='.')
{

break;

}

}

a[i+1]='\0';

printf("\n");

printf("%s",a);


getch();
}