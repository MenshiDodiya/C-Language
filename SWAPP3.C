#include<stdio.h>
#include<conio.h>

void main()
{
	/*
	Swapping of two variable value without using extra variable.
	*/
	int num1=20, num2=45;
	clrscr();
	printf("Before swapping\n num1=%d\n num2=%d\n",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("After swapping\n num1=%d\n num2=%d\n",num1,num2);
	getch();
}