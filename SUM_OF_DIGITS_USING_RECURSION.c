#include<stdio.h>
int sumofdigit(int b)
{
    if(b==0)
        return 0;
    return (b%10 + sumofdigit(b/10));
}
void main()
{
    int a,x;
    printf("Input number : ");
    scanf("%d",&a);
    x=sumofdigit(a);
    printf("Sum of digits : %d",x);
}
