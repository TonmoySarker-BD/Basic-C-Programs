#include <stdio.h>

int main()
{
    // Write codes hare
    int a,b;

    printf("Enter a number : ");
    scanf("%d",&a);

    printf("Enter another number : ");
    scanf("%d",&b);

    int sum,sub,mul,mod;
    float div;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(double)a/b;
    mod=a%b;

    printf("The value of sum : %d \n",sum);
    printf("The value of sub : %d \n",sub);
    printf("The value mul : %d \n",mul);
    printf("The value div : %f \n",div);
    printf("The value mod : %d \n",mod);

    return 0;
}

