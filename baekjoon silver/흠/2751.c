#include <stdio.h>
#include <stdlib.h>


int main() {
    int n,temp;
    scanf("%d",&n);
    int *p=(int*)malloc(sizeof(int)*n);
    for (int i=0; i<n; i++) {
        scanf("%d",&p[i]);
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (p[j]>p[j+1]) {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        printf("%d\n",p[i]);
    }
}
