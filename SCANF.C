#include<stdio.h>
#include<conio.h>

void main()
{
	/*
	User Input
	-> How to take input from user using scanf() function.
	-> scanf function is used to take a values from the user.

	syntax:- scanf("%d",&variablename);
	eg:-scanf("%d",&num);
	*/
	int num1;
	float num2;
	char ch;
	clrscr();
	printf("Enter any Character:");
	scanf("%c",&ch);
	printf("Enter any number: ");
	scanf("%d",&num1);
	printf("Enter any Float number:");
	scanf("%f",&num2);
	printf("\n-----Printing the values of variable-----\n\n");
	printf("num1= %d\n",num1);
	printf("num2= %f\n",num2);
	printf("ch= \" %c \" ",ch);
	getch();
}