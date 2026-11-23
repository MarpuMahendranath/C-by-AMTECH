#include<stdio.h>
int factorial(int num)
{
    int fact = 1;
    for(int i = 1 ; i<=num; i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ans = factorial(num);
    printf("%d is the Factorial of %d",ans,num);
    return 0;
}