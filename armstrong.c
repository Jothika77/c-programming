#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n/=10;
    }
    if(temp==sum)
       printf("armstrong number");
    else
       printf("not an armstrong number");   
}