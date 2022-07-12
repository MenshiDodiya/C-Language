#include<stdio.h>
#include<conio.h>

/*Swapping the Two variable values using extra variable....*/
void main()
{
	int num1=23 , num2=34, temp;
	clrscr();
	printf("Before Swapping \nnum1= %d \nnum2=%d\n\n",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After Swapping \nnum1=%d \nnum2=%d",num1,num2);
	getch();
}