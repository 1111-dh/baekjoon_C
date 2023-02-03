#include <stdio.h>

int count(char s[])
{
    int cnt=0;
    for (int i=0; s[i]!='\0'; i++)
    {
        if (s[i]=='6') {
            cnt++;
            if (s[i+1]!='6' && cnt<3) cnt=0;
        }
    }
    return cnt;
}
int main() {
    int n,s=666;
    char str[100];
    
    scanf("%d",&n);
    while(n--)
    {
        while (1)
        {
            sprintf(str, "%d", s);
            if (count(str)>=3)
            {
                s++;
                break;
            }
            s++;
        }
    }
    printf("%d\n",--s);
    return 0;
}
