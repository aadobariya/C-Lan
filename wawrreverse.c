#include<stdio.h>
int reverse()
{
	int n,rev=0,last;
	printf("enter number: ");
	scanf("%d",&n);


	 while (n != 0) {
    last = n % 10;
    rev = rev * 10 + last;
    n=n/10;
  }

  printf("Reversed number = %d", rev);

}
int main()
{
	
	reverse();
}


