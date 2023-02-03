#include <stdio.h>
#define M 1234567891
int main() {
    int l;
    long long sum=0,r=1;
    char str[51];
    scanf("%d",&l);
    scanf("%s",str);
    for (int i=0; i<l; i++)
    {
        for (int j=0; j<i; j++)
        {
            r*=31;
        }
        sum+=(str[i]-96)*r;
        r=1;
    }
    printf("%llu\n",sum%M);
}
