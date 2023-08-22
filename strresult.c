#include<stdio.h>
struct student{
	int roll;
	char name[20];
	int m,s,e,t;
	float per;
};
int main()
{
	struct student a[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter roll no: ");
		scanf("%d",&a[i].roll);
		printf("enter student name: ");
		scanf("%s",&a[i].name);
		printf("enter maths mark: ");
		scanf("%d",&a[i].m);
		printf("enter science mark: ");
		scanf("%d",&a[i].s);
		printf("enter english mark: ");
		scanf("%d",&a[i].e);

	}

	printf("Roll\tName\tMaths\tScience\tEnglish\tTotal\tpercentage");
	for(i=0;i<2;i++)
	{
		a[i].t=a[i].m+a[i].s+a[i].e;
		a[i].per=(float)a[i].t/3;
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].roll,a[i].name,a                       [i].m,a[i].s,a[i].e,a[i].t,a[i].per);
	}
}