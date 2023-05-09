#include<stdio.h>
#include<conio.h>
void main()
{
int i,first,last,middle,n,search,array[100];
clrscr();
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d integer\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("Enter value to find:\n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(array[middle]<search)
first=middle+1;
else if(array[middle] == search)
{
printf("%d found at location %d\n",search,middle);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("Not found! %d is not present in the list.\n",search);
getch();
}
