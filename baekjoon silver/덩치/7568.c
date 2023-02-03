#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int w;
    int h;
    int n;
    int rank;
}body;

int main() {
    int n;
    scanf("%d",&n);
    body *p=(body*)malloc(sizeof(body)*n);
    body temp;
    int i,j;
    for (i=0; i<n; i++) {
        scanf("%d %d",&p[i].w,&p[i].h);
        p[i].n=i;
        p[i].rank=0;
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (p[j].w > p[j + 1].w && p[j].h > p[j + 1].h) {
                
                temp.w = p[j].w;
                p[j].w = p[j + 1].w;
                p[j + 1].w = temp.w;
                
                temp.h = p[j].h;
                p[j].h = p[j + 1].h;
                p[j + 1].h = temp.h;
            }
        }
    }
    p[0].rank=1;
    
    for (i = 0; i < n; i++)
    {
        if (p[i].h > p[i + 1].h && p[i].w > p[i + 1].w)
        {
            p[i+1].rank++;
        }
        else if (p[i].h >= p[i + 1].h && p[i].w <= p[i + 1].w)
        {
            p[i+1].rank = p[i].rank;
        }
        else if (p[i].h <= p[i + 1].h && p[i].w >= p[i + 1].w)
        {
            p[i+1].rank = p[i].rank;
        }
        else
        {
            p[i+1].rank = p[i].rank;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (p[j].n > p[j + 1].n) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", p[i].rank);
    }
}
