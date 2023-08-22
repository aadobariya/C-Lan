#include<stdio.h>
int main()
{
  int i,n,j;
  
	printf("enter a value : ");
	scanf("%d",&n);	  
	
	i=1;

	do{
	  printf("\n %c",i);
	  printf("%d",i);
	  j=j+i;
	  i+=2;	
	}while(i<=n);

	printf("\n total : %d ",j);
	
}