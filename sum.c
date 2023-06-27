#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("enter number1");
    scanf("%d",&num1);
    printf("enter number2");
    scanf("%d",&num2);
    for(i=1;i<=num2;i++)
    {
        num1++;
    }
    printf("%d",num1);
}