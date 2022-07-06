#include<stdio.h>
#include<conio.h>

void main()
{
	/*
	Logical Operator
	&& and
	|| or
	! not
	It works with condition
	*/
	clrscr();
	printf("(45==45) && (56>=67) = %d\n",(45==45)&&(56>=67));
	printf("(56<=90) || (78>89) = %d\n",(56<=90)||(78>89));
	printf("!(45==45) = %d",!(45==45));
	getch();
}