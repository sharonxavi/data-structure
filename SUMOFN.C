#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum=sum+i;
}
printf("\n The sum is:%d",sum);
getch();
}