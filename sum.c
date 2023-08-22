#include<stdio.h>
int main()
{
	int a[5][5],total=0,total1=0,total2=0;
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter 1 val: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			  if(i==j)
			  {  total=total+a[i][j]; }
			  else if(i<j)
			  {  total1=total1+a[i][j]; }
			  else if(j<i)
			  {  total2=total2+a[i][j]; }
		}
	printf("\n");
	}
	printf("\nTotal of diagonal elements : %d",total);
	printf("\nTotal of upper triangle elements : %d",total1);
	printf("\nTotal of lower triangle elements : %d",total2);
}