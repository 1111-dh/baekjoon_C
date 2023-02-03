#include <stdio.h>

void push(int list[],int n)
{
    list[sizeof(list)/sizeof(int)-1]=n;
}

void pop(int list[])
{
    if (list[0]==NULL)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",list[0]);
        for (int i=0; i<sizeof(list)/sizeof(int); i++)
        {
            list[i]=list[i+1];
        }
        list[sizeof(list)/sizeof(int)]=NULL;
    }
}

void size(int list[])
{
    printf(sizeof(list)/sizeof(int));
}

void empty(int list[])
{
    if (list[0]==NULL)
    {
        printf("%d",1);
    }
    else
    {
        printf("%d",0);
    }
}

void front(int list[])
{
    if (list[0]==NULL)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",list[0]);
    }
}

void back(int list[])
{
    if (list[0]==NULL)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",list[sizeof(list)/sizeof(int)-1]);
    }
}
int main() {
    int n,m;
    char c;
    scanf("%d",&n);
    int list[100000];
    for (int i=0; i<n; i++)
    {
        scanf("%s",&c);
        if (c=="push")
        {
            scanf("%d",&m);
            push(list,m);
        }
        else
        {
            c(list);
        }
    }
    return 0;
}
