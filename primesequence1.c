#include<stdio.h>
int main()
{
    int a=1,i,count;
    while(a<=2000)
    {
        count=0;
        while(i<=a/2)
        {
            if(a%i==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count==0 && a!=1)
        {
            printf("%d",a);
        }
        a++;
    }
    return 0;
}