#include<stdio.h>
int main()
{
  int i,j,sp=25;
  
	
	 i=5;
	 
	    while(i>=1){ 
	j=1;
	           while(j<=sp){  

				  printf(" ");
				  j++;
	      	      }
			
	j=i;
		      while(j>=1){


				printf("* ");
				j--;
	      	    }

		  sp++;
	 	  printf("\n");
	  	  i--;	
	      }
	
}