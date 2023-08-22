#include<stdio.h>
void main()
{
	int a=10,b=20,*p,*q;
	p=&a;
	q=&b;

	printf("value of a is: %d\n",a);
	printf("address of a is: %u\n",&a);
	printf("value of a is: %d\n",b);
	printf("address of a is: %u\n",&b);

	printf("after value of a is: %d\n",a);
	printf("after address of a is: %d\n",q);
	printf("after value of a is: %d\n",b);
	printf("after address of a is: %d\n",p);
}
