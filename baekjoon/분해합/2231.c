#include <stdio.h>
int digit(int n,int c)
{
    int sum=0;
    for (int i=0; i<c; i++)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,n1,count=0;
    scanf("%d",&n);
    n1=n;
    while (n1!=0)
    {
        n1/=10;
        count++;
    }
    for (int i=n-9*count; i<n; i++)
    {
        if (digit(i,count)+i==n)
        {
            printf("%d\n",i);
            break;
        }
        else if (i==n-1)
        {
            printf("%d",0);
        }
    }
}
