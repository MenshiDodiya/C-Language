#include<stdio.h>
#include<conio.h>

void main()
{
	/*
	increment/decrement
	-> Postfix
	 num++
	 num--
	-> In postfix first the variable value will
	 return then after increment/decrement value

	-> Prefix
	 ++num
	 --num
	-> In prefix directly the value of variable will be
	done increment/decrement
	*/
	int num=20;
	clrscr();
	printf("num++ = %d\n",num++);
	printf("num= %d\n",num);
	printf("++num = %d\n",++num);
	printf("num-- = %d\n",num--);
	printf("num = %d\n",num);
	printf("--num = %d",--num);
	getch();
}