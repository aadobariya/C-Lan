#include<stdio.h>
void main()
{
	int  eng[5],hin[5],guj[5],total,pr,i;
	

     for(i=0;i<5;i++)
	{
		printf("value eng[%d] : ",i);
		scanf("%d",&eng[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("value hin[%d] : ",i);
		scanf("%d",&hin[i]);
	}

	
     for(i=0;i<5;i++)
	{
		printf("value guj[%d] : ",i);
		scanf("%d",&guj[i]);
	}

	
	printf("eng\thin\tguj\ttotal\tper\tgrade");
	for(i=0;i<5;i++)
	{
	total=eng[i]+hin[i]+guj[i];
	pr=total*100/300;
	printf("\n%d\t%d\t%d\t%d\t%d\t",eng[i],hin[i],guj[i],total,pr);
	if(eng[i]<35 || guj[i]<35 || hin[i]<35){
		printf("fail");
	}
	else if(pr>=90){
	printf("A");
	}
	else if(pr>=70){
	printf("B");
	}
	else if(pr>=50){
	printf("C");
	}
	else if(pr>=35){
	printf("D");
	}
   }
}