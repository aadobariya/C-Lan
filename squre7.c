#include<stdio.h>
int main()
{
  int i,j,a=0;
  
	
	 i=1;
	 
	    do{ 
	j=1;
	           do{  
				  a=1+a;
				  printf("%d ",a);
				  j++;
	      	      }while(j<=5);

		  
	 	  printf("\n");
	  	  i++;	
	      }while(i<=5);
	
}