#include<stdio.h>
int main()
{
    int n,sum=0,i,rem;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        {
            rem=n%i;
        }
        if(rem==0)
        {
            sum=sum+i;
        }  
    }    
    if(sum==n)
        printf("perfect number");
    else
        printf("not a perfect number");
}