#include<stdio.h>
# define N 7
int main()
{
    int arr[N],*ptr;
    printf("enter the elements");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=&arr[N-1];
    printf("the reversed elements are");
    for(int i=0;i<N;i++)
    {
        printf("%d\n",*ptr--);
    }
  return 0;
}