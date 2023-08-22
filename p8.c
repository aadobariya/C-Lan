#include<stdio.h>
int main()
{
  int i,j,sp=25;
  
	
	 i=1;
	 
	    do{ 
	j=1;
	           do{  

				  printf(" ");
				  j++;
	      	      }while(j<=sp);
			
	j=1;
		      do{


		if(i==5||i==1||j==1||j==5)
		printf("* ");

	    else
	    printf("  ");


				j++;
	      	    }while(j<=5);

		  
	 	  printf("\n");
	  	  i++;	
	      }while(i<=5);
	
}