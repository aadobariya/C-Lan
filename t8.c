#include<stdio.h>
int main()
{
  char i,j,a=64;
  
	  
	
	i=1;

	while(i<=5){
	  		j=1;

					while(j<=i){
						
					 j++;
                       if(i%2==0){
					 printf("%c ",a+1);
						}
	  else{
	  printf("%c ",a+33);
		}
             }while(j<=i);
	  
		a=1+a;
	  printf(" \n ");
	  i++;	
	}

	
	
}