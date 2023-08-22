#include<stdio.h>
void main()
{
	int a[5],b[5],i,c;
     for(i=0;i<5;i++)
	{
		printf("value a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("value b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<5;i++)
	{
	c=a[i]+b[i];
	printf("a:%d  +  b:%d  =  %d\n",a[i],b[i],c);
	}
}