#include<stdio.h>
#include<conio.h>

void main()
{
	//Assignment Operator
	/*
	= assignment
	+= addition assignment
	-= substraction assignment
	*= multiplication assignment
	/= division assignment
	%= modulo assignment
	*/
	int num=10;
	clrscr();
	printf("Addition assignment=%d\n",num+=12);
	printf("Substraction assignment=%d\n",num-=3);
	printf("Multiplication assignment=%d\n",num*=4);
	printf("Division assignment=%d\n",num/=5);
	printf("Modulo assignment=%d\n",num%=6);
	getch();
}