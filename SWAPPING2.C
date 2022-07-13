#include<stdio.h>
#include<conio.h>

void main()
{
	/*
	Swapping of three variables using extra varaiable.
	*/
	int num1, num2, num3, temp;
	clrscr();
	printf("Enter values:\n");
	printf("num1=");
	scanf("%d",&num1);
	printf("num2=");
	scanf("%d",&num2);
	printf("num3=");
	scanf("%d",&num3);
	printf("\nBefore Swapping\n num1=%d \n num2=%d\n num3=%d\n\n",num1,num2,num3);
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;
	printf("After Swapping\n num1=%d \n num2=%d\n num3=%d\n",num1,num2,num3);
	getch();
}
