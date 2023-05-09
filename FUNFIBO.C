#include<stdio.h>
#include<conio.h>
int fibonnaci(int n)
int main()
{
int n;
clrscr();
priintf("Enter an number for fibonnaci series:");
scanf("%d",&n);
if(n<=0)
{
printf("The entered number should me more than 0");
}
else
{
printf("The first %d terms of the fibonacci series is:",n);
fibonnaci(n)
}
getch();
return 0;
}
int fibonnaci(int n)
{
int i,t1=0,t2=1,t3;
for(i=1;i<=n;i++)
{
printf("\n%d",t1);
t3=t1+t2;
t1=t2;
t3=t2;
}
}