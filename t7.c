#include<stdio.h>
int main()
{
  char i,j,a=64;
  
	  
	
	i=1;

	do{
	  		j=1;

					do{
						
					 j++;
                       if(i%2==0){
					 printf("%c ",a+33);
						}
	  else{
	  printf("%c ",a+1);
		}
             }while(j<=i);
	  
		a=1+a;
	  printf(" \n ");
	  i++;	
	}while(i<=5);

	
	
}