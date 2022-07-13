#include<stdio.h>
#include<conio.h>

void main()
{
	/*
	Swapping of Three variable value without using extra variable.
	*/
	int num1, num2, num3;
	clrscr();
	printf("Enter values:\n");
	printf("num1=");
	scanf("%d",&num1);
	printf("num2=");
	scanf("%d",&num2);
	printf("num3=");
	scanf("%d",&num3);
	printf("\nBefore swapping\n num1=%d\n num2=%d\n num3=%d\n",num1,num2,num3);
	num1=num1+num2+num3;
	num2=num1-num2-num3;
	num3=num1-num2-num3;
	num1=num1-num2-num3;
	printf("\nAfter swapping\n num1=%d\n num2=%d\n num3=%d\n",num1,num2,num3);
	getch();
}