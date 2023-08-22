#include<stdio.h>
int main()
{
  int i,n,j;
  
	printf("enter a value : ");
	scanf("%d",&n);	  
	
	i=1;

	while(i<=n){
		if(i%2==0)
		{
			j=i*i;
			printf("%d ",j);
		}
		else
		{
			printf("%d ",i);
		}
	  
	  
	  i++;	
	}

	
	
}