#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    if(n%2!=0)
    {
       x=3*n+1;
    }
    else if(n%2==0)
    {
        x=n/2;
    }
    printf("%d",x);
    return 0;
}    
      
    
    