#include <stdio.h>
int fibbonnaci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;    
    else 
        return fibbonnaci(n-1)+fibbonnaci(n-2);
}

int main()
{
    int i,n;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        printf("%d ",fibbonnaci(i));
    }
}