#include<stdio.h>
void main()
{
	char str[200],str2[200];
	int i=0,j=0;

	printf("Enter string 1: ");
	gets(str);

	printf("Enter string 2: ");
	gets(str2);

	while(str[i]!='\0'){
		i++;
	}
	
 	while(str2[j]!='\0'){
	str[i++]=str2[j++];
	}
	str[i]='\0';

	printf("\nmarge string :%s",str);
}