#include<conio.h>
#include<stdio.h>

void main()
{
  int num1,num2,num3,i;
  clrscr();
  num1 =0;
  num2 =1;
  printf("%d\n",num1);
  printf("%d\n",num2);
  for(i=0;i<10;i++)
  {
    num3 = num1 + num2;
    printf("%d\n",num3);
    num1=num2;
    num2=num3;
  }
  getch();
}