#include<stdio.h>
int main()
{
    int n,num,i,count;
    printf("enter the range");
    scanf("%d",&n);
    printf("the sequence of prime no from 1 to %d",n);
    for(num=1;num<=n;num++)
    { 
        count=0;
        for(i=2;i<num/2;i++)
        {
            if(num%i==0)
              count++;
              break;
        }
    
    if(count==0 && num!=1)
     {
      printf("%d\n",num);
     } 
    }
}     
