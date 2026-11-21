#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    int i =1;
    while(i<=num){
        printf("%d ",i);
        i = i+1;
    }
    return 0;
}