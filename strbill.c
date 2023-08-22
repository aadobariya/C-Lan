#include<stdio.h>
struct bill{
	int no;
	char product[20];
	int rate,qty,amt,billamt,netbill;
	float dis,gst;
};
int main()
{
	struct bill a[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter number: ");
		scanf("%d",&a[i].no);
		printf("enter product name: ");
		scanf("%s",&a[i].product);
		printf("enter rate: ");
		scanf("%d",&a[i].rate);
		printf("enter qty: ");
		scanf("%d",&a[i].qty);
		
	}

	printf("Number\tproduct\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");
	for(i=0;i<2;i++)
	{
		a[i].amt=a[i].rate*a[i].qty;
		a[i].dis=(float)a[i].amt*0.05;
		a[i].billamt=a[i].amt-a[i].dis;
		a[i].dis=(float)a[i].billamt*0.18;
		a[i].netbill=a[i].billamt+a[i].gst;

		printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%d\t%.2f\t%d",a[i].no,a                       [i].product,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a              [i].dis,a[i].netbill);
	}
}