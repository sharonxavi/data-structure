#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,x,y,matrix[10][10],d1,d2;
clrscr();
printf("Enter the number of rows in the matrix:");
scanf("%d",&x);
printf("Enter the number of coloums in the matrix:");
scanf("%d",&y);
for(i=1;i<=x;i++)
{
for(j=1;j<=y;j++)
{
printf("Enter the value in [%d][%d]",i,j);
scanf("%d",matrix[i][j]);
}
}
d1=(matrix[1][1]+matrix[2][2]+matrix[3][3]);
d2=(matrix[1][3]+matrix[2][2]+matrix[3][1]);
printf("The sum of diagonal1:",d1);
printf("\nThe sum of diagonal 2:",d2);
getch();
}