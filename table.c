#include<stdio.h>
int main()
{
	int n,i=1,ans;
	printf("enter your table number: ");
	scanf("%d",&n);

 	 	
	table:
	if(i<=10)
	{
		ans=n*i;
		printf("%d * %d = %d\n",n,i,ans);
		i++;
		goto table;	
	}
}