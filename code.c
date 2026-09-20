#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter Number=");
    scanf("%d",&n);
    if (n%5==0)
    {
    printf("Yes,%d is divisible by 5",n);
    }
    else
    {
    printf("No,%d is not divisble by 5",n);
    }
    return 0;
}