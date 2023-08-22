#include<stdio.h>
int main()
{
  int i,n,j;
  
	printf("enter a value : ");
	scanf("%d",&n);	  
	
	i=2;

	while(i<=n){
	  printf("\n %c",i);
	  printf("%d",i);
	  j=j+i;
	  i+=2;	
	}

	printf("\n total : %d ",j);
	
}