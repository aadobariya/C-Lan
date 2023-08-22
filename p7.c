#include<stdio.h>
int main()
{
  int i,j,sp=25;
  
	
	 i=1;
	 
	    while(i<=5){ 
	j=1;
	           while(j<=sp){  

				  printf(" ");
				  j++;
	      	      }
			
	j=1;
		      while(j<=i){


				printf("* ");
				j++;
	      	    }

		  sp--;
	 	  printf("\n");
	  	  i++;	
	      }while(i<=5);



 i=6;
	 
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
