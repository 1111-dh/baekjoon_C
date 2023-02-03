#include <stdio.h>
#include <string.h>
#define SIZE 1000001

int main()
{
    char str[SIZE];
    int count=1;
    scanf("%[^\n]s",str);
    int len=strlen(str);
    if (str[0]==' ' && len==1) printf("%d\n",0);
    else
    {
        if (str[0]==' ') str[0]='0';
        if (str[len-1]==' ') str[len-1]='0';
        for (int i=0; i<len; i++)
        {
            if (str[i]==' ')
            {
                count++;
            }
        }
        printf("%s\n",count);
    }
    
    return 0;
}
