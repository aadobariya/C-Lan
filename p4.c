#include<stdio.h>
int main()
{
  int i,j,sp=25;
  
	
	 i=5;
	 
	    do{ 
	j=1;
	           do{  

				  printf(" ");
				  j++;
	      	      }while(j<=sp);
			
	j=i;
		      do{


				printf("* ");
				j--;
	      	    }while(j>=1);

		  
	 	  printf("\n");
	  	  i--;	
	      }while(i>=1);
	
}