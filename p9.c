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
		      while(j<=5){


		if(j==1||i==5||j==i)
		printf("* ");

	    else
	    printf("  ");


				j++;
	      	    }

		  sp--;
	 	  printf("\n");
	  	  i++;	
	      }
	
}