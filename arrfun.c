#include<stdio.h>
#define n 8
void display(int arr[])
{
	for(int i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}
	
}
int main()
{
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter val : ");
		scanf("%d",&a[i]);
	}
	display(a);
}