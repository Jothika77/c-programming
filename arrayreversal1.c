#include<stdio.h>
#define N 1000
int main()
{
    int arr[N];
    int n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed elements are");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}