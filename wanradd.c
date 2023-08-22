#include<stdio.h>
int Add(int a, int b)
{
    int t;
    t = a + b;
    printf("addition is :%d",t);
}
int main()
{
    // Add(2,5);
    int x,y;
    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);
    Add(x,y);
}