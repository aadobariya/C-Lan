#include<stdio.h>
int odd()
{
	int n,i;
	printf("\nenter  n number:  ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	

}
int even()
{
	int n,i;
	printf("\nenter  n number:  ");
	scanf("%d",&n);
	for(i=0;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	

}
int main()
{
	int x;
	printf("enter x : ");
	scanf("%d",&x);
	if(x%2!=0)
	{
		odd();
	}
	else
	{
		even();
	}	
}