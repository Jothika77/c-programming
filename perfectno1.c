#include<stdio.h>
int isPerfectno(int num);
int main()
{
  int i;
  for(i=1;i<10000;i++)
  {
    if(isPerfectno(i))
    {
      printf("%d\n",i);
    }
  }
}
int isPerfectno(int num)
{
  int sum=0,rem,i;
  for(i=1;i<num;i++)
  {
    rem=num%i;
    if(rem==0)
    {
      sum=sum+i;
    }
  }
  if(sum==num)
    return 1;
  else
    return 0;  
}