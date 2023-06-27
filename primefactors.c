#include<stdio.h>
int Primefactor(int n)
{
    while(n%2==0)
    {
        printf("%d\n",2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            n/=i;
        }
    }
    if(n>2)
      printf("%d\n",n);
}
int main()
{
    int n=30;
    Primefactor(n);
    return 0;
}