#include<stdio.h>
int main()
{
  int i,j,a=10;
  
	
	 i=1;
	 
	    do{ 
	j=1;
	           do{  
				  a=1+a;
		if(j<=5){
				  printf("%d ",a);
				}
				  j++;
	      	      }while(j<=10);

		  
	 	  printf("\n");
	  	  i++;	
	      }while(i<=5);
	
}