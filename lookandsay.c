#include<stdio.h>
int main()
{
    int num=1,i,temp,count,newNum,k;
    for(i=0;i<6;i++)
    {
        printf("%d\n",num);
        newNum=0;
        k=1;
        while(num!=0)
        {
            temp=num%10;
            num/=10;
            count=1;
            while(temp==num%10)
            {
                count++;
                num/=10;
            }
            newNum=((count*10+temp)*k)+newNum;
            k=k*100;
        }
        num=newNum;
    }
}