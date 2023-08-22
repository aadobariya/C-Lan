#include<stdio.h>
int main()
{
  char i,j,a=64;
  
	  
	
	i=1;

	do{
	  		j=1;

					do{
					  a=1+a;
					 printf("%c ",a);
					 j++;
					}while(j<=i);
	  
	  printf(" \n ");
	  i++;	
	}while(i<=5);

	
	
}