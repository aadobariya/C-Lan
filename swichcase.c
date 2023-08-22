#include<stdio.h>
int main()
{
	int a=10,b=5,ch;
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("enter your number : ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
		       printf("Addition of a and b is :%d\n",a+b);
		       break;
		case 2:
		       printf("Subtraction of a and b is :%d\n",a-b);
		       break;
		case 3:
		       printf("Multiplication of a and b is :%d\n",a*b);
		       break;
		case 4:
		       printf("Division of a and b is :%d\n",a/b);
		       break;
		default:
		       printf("wrong choise...");
		       break;	
	}
}