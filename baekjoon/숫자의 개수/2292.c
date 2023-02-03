#include <stdio.h>
#include <math.h>

int bee(int n)
{
    return (int)ceil((3+sqrt(12*(double)n-3))/6);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",(int)n==1?1:bee(n));
}
