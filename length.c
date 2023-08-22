#include<stdio.h>
void main()
{
	char str[20];
	printf("Enter string: ");
	gets(str);

	printf("Your string is: %s\n",str);

	int i=0;
	while(str[i]!='\0'){
	     i++;
	}
	printf("\nLength is : %d",i);
}