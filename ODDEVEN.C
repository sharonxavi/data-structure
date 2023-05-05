#include <stdio.h>
#include <conio.h>
void main()
{
    int M,N,x,i;
    clrscr();
    printf("Enter the value of M:");
    scanf("%d",&M);
    printf("Enter the value of N:");
    scanf("%d",&N);
    printf("\neven numbers between %d and %d are: ",M,N);
    for(i=M; i<=N; i++){
	x=i%2;
	if(x==0)
	    printf("\n %d",i);
    }
    printf("\n\nodd numbers between %d and %d are: ",M,N);
    for(i=M; i<=N; i++){
	x=i%2;
	if(x==1)
	    printf("\n %d",i);
    }
    getch();
}