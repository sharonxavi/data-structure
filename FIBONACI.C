#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f1,f2,f3;
clrscr();
printf("\n enter the value of n:");
scanf("%d",&n);
f1=0;
f2=1;
printf("\nThe fibonaci series is:");
printf("%d\n",f1);
printf("%d\n",f2);
for(i=0;i<=n-2;i++)
{
	f3=f1+f2;
	printf("%d\n",f3);
	f1=f2;
	f2=f3;
}
getch();
}