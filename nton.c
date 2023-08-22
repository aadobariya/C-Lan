#include<stdio.h>
int main()
{
  int i,n;
  
	printf("enter a value n: ");
	scanf("%d",&n);
	i=-n;
	do{
	  printf("\n %d",i);
	  i++;	
	}while(i<=n);
	
}