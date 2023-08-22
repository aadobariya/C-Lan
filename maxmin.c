#include<stdio.h>
#define n 10
int dis(int a[])
{
	int max=a[0],min=a[0];

	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}	
	}
	   printf("\n largest number is : %d",max);
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}		
	}
		printf("\n smallest number is : %d",min);
}
int main()
{
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter number: ",i);
		scanf("%d",&a[i]);

	}
	dis(a);
}