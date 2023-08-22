#include<stdio.h>
int sub(int a, int b)
{
    int t;
    t = a - b;
    return t;

}
int main()
{
    // Add(2,5);
    int x,y;
    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);
    int r=sub(x,y);
    printf("substraction is : %d",r);
}