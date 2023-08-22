#include<stdio.h>
int main()
{
   int i;
	
	
    
	
	i=0;

	while(i<=24){
	  if(i%4==0)
 	  {
		printf("%c ",i+65);
	  }
	else{
	  printf("%c ",i+97);
	}	
	 
	  i+=2;	
	}

	
	
}