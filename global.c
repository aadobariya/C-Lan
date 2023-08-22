 #include<stdio.h>

int dis()
{

	printf("maths is : %d\n",m);
	printf("science is : %d\n",s);
	printf("english is : %d\n",e);
	printf("total is : %d\n",t);

}
int calc()
{
	
	t=m+s+e;
	dis(int m,int s,int e,int t);
}
int setData(int m,int s,int e,int t)
{
	

	printf("enter m: ");
	scanf("%d",&m);
        printf("enter s: ");
	scanf("%d",&s);
        printf("enter e: ");
	scanf("%d",&e);
	calc(int m,int s,int e,int t);

}
int main()
{
	setData();

}	