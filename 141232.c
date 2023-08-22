#include<stdio.h>
int main()
{
  int i,n,j,a=1;
	printf("enter a value : ");
	scanf("%d",&n);
    
	
	i=1;

	while(i<=n){
	  j=(a*i);
	  printf(" %d",j);
	  a=a*2;
	  i++;	
	}

	
	
}