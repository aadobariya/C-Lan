#include<stdio.h>
void main()
{
	int  price[5],qty[5],amt,disc,discAmt,gst,BillAmt,Product,totaldiscAmt[5],totalgst[5],totalBillAmt[5],i;
	
	for(i=0;i<5;i++)
	{
		printf(" Price[%d] : ",i);
		scanf("%d",&price[i]);
	}

	for(i=0;i<5;i++)
	{
		printf(" qty[%d] : ",i);
		scanf("%d",&qty[i]);
	}

	
	

	printf("price\tqty\tamt\tdisc\tdiscAmt\tgst\tBillAmt");
	for(i=0;i<5;i++)
	{
	 amt=price[i]*qty[i];
	 disc=amt*0.10;
	 discAmt=amt-disc;
	 gst=discAmt*0.18;
	 BillAmt=discAmt+gst;
	 
	printf("\n\n%d\t%d\t%d\t%d\t%d\t%d\t%d",price[i],qty[i],amt,disc,discAmt,gst,BillAmt);
	
        }
	
}