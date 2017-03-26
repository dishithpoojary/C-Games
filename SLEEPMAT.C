#include<conio.h>
#include<stdio.h>
#include<math.h>

void matrix(int a[100][100],int b[100][100],int m,int n,int q);

void main()
{

int a[100][100],b[100][100],c[100][100],i,j,k,m,n,p,q;
clrscr();

printf("enter the order of first matrix (mxn):");
scanf("%d,%d",&m,&n);

printf("\nenter the order of the second matrix (%dxq):",n);
scanf("%d",&q);

p=n;

printf("\n\nEnter the elements of the matrix 1:");

for(i=0;i<m;i++)
{

for(j=0;j<n;j++)
{

scanf("%d,",&a[i][j]);

}

}

printf("\n");

for(i=0;i<m;i++)
{

for(j=0;j<n;j++)
{

printf("%d ",a[i][j]);

}

printf("\n");

}

printf("\n\nEnter the elements of the matrix 2:");


for(i=0;i<p;i++)
{

for(j=0;j<q;j++)
{

scanf("%d,",&b[i][j]);

}

}


for(i=0;i<p;i++)
{

for(j=0;j<q;j++)
{

printf("%d ",b[i][j]);

}

printf("\n");

}

printf("\nThe matrix after multiplication is\n");

matrix(a,b,m,n,q);

getch();

}

void matrix(int a[100][100],int b[100][100],int m,int n,int q)

{

int c[100][100],i,j,k;

for(i=0;i<m;i++)
{

for(j=0;j<q;j++)
{

c[i][j]=0;

for(k=0;k<n;k++)
{

c[i][j]=c[i][j]+a[i][k]*b[k][j];

}

printf("%d ",c[i][j]);

}

printf("\n");

}

}
