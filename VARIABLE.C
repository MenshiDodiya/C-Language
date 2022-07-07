#include<stdio.h>
#include<conio.h>

void main()
{
	/*
	variables
	Syntax:- datatype variable_name = value;

	variable name rules

	1 variable name must start with alphabet and underscore(_)
	2 variable name must not contain any number in starting
	3 variable name must not contain any space in between
	instead of space use underscore
	4 variable name must not be any keyword of c
	5 variable name must not contain any special character(@, $, %, #)
	*/
	int num_b=56;
	float num1 = 34.23;
	char ch = 'F';
	clrscr();
	printf("value is =%d\n",num_b);
	printf("Value is =%f\n",num1);
	printf("Value is =%c",ch);
	getch();
}