#include <stdio.h>

int main() {
    int a,b,v;
    scanf("%d %d %d",&a,&b,&v);
    int m=(v-a)%(a-b);
    int q=(v-a)/(a-b);
    if (v==a) printf("%d",1);
    else if (q==0)
    {
        printf("%d",2);
    }
    else
    {
        if(m==0)
        {
            printf("%d",q+1);
        }
        else
        {
            printf("%d",q+2);
        }
    }
}
