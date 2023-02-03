#include <stdio.h>
int card2(int list[],int n);

int main()
{
    int n;
    scanf("%d",&n);
    int list[500001];
    for (int i=n; i>0; i--)
    {
        list[n-i]=i;
    }
    printf("%d\n",card2(list,n));
}

int card2(list[], n)
{
    if (n==1) return list[0];
    else if (n%2==1)
    {
        
    }
    else
    {
        list[n-1]=NULL;
        n--;

        for (int i=n-1; i>=0; i--)
        {
            list[i+1]=list[i];
        }
        list[0]=list[n-1];
        for (int i=0; i<n; i++)
        {
            list[i]=list[i+1];
        }
        list[n-1]=NULL;
        return card2(list,n);
    }
}
