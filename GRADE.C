#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the marks scored:");
scanf("%d",&n);
if(n>=85)
{printf("You got S grade!");}
else if(n<85 && n>=80)
{printf("You got A grade!");}
else if(n<80 && n>=70)
{printf("You got B grade!");}
else if(n<70 && n>=65)
{printf("You got C grade!");}
else if(n<65 && n>=55)
{printf("You got D grade!");}
else if(n<55 && n>=33)
{printf("You got E grade!");}
else
{printf("You got F grade!");}
getch();
}