#include<stdio.h>
int main()
{
  int i,n,j;
  
	printf("enter a value : ");
	scanf("%d",&n);	  
	
	i=1;

	do{
	  
	  printf("%d ",j);
	  j=i*i;
	  i++;	
	}while(i<=n);

	
	
}