#include<stdio.h>
void main()
{
	char str[200],str2[200];
	int i,j,a=0;

	printf("Enter string: ");
	gets(str);

	printf("your string :%s\n",str);

	for(a=0;str[a]!='\0';a++);
		j=a;
	
	
 	for(i=0;i<a;i++)
	{	
	    str2[i]=str[--j];
	}
	str2[i]='\0';

	printf("\nReverse string :%s",str2);
}