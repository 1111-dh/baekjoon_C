#include <stdio.h>

int main()
{
    int n,m,p=0;
    scanf("%d %d",&n,&m);
    int list1[100]={0};
    for (int i=0; i<n; i++)
    {
        scanf("%d",&list1[i]);
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k=0; k<n; k++)
            {
                if (list1[i]+list1[j]+list1[k]>m)
                {
                    continue;
                }
                else if (i==j || j==k || i==k)
                {
                    continue;
                }
                else if (p<list1[i]+list1[j]+list1[k])
                {
                    p=list1[i]+list1[j]+list1[k];
                }
                else continue;
            }
        }
    }
    printf("%d\n",p);
}
