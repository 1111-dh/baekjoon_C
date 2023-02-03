#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,ca=0,cb=0;
    scanf("%d %d",&a,&b);
    int pa[10000],pb[10000],max[10000];
    int k=0;
    for (int i=0; i<a; i++) {
        if (a%(i+1)==0) {
            pa[k++]=i+1;
            ca++;
        }
    }
    k=0;
    for (int i=0; i<b; i++) {
        if (b%(i+1)==0) {
            pb[k++]=i+1;
            cb++;
        }
    }
    k=0;
    for (int i=0; i<ca; i++) {
        for (int j=0; j<cb; j++) {
            if (pa[i]==pb[j]) max[k++]=pa[i];
        }
    }
    printf("%d\n",max[k-1]);
    
    for (int i=a>b?a:b; i<a*b+1; i++)
    {
        if (i%a==0 && i%b==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
