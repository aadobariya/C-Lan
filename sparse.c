#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter 1 val: ");
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  if(a[i][j]==0)
			printf("  ");
		  else
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	

}