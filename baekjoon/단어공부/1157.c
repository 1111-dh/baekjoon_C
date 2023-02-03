#include <stdio.h>
#include <string.h>
#define SIZE 1000001

int main() {
    char str[SIZE];
    scanf("%s",str);
    int len=strlen(str);
    int cnt[26]={0};
    int d=0;
    for (int i=0; i<len; i++)
    {
        if (str[i]>='A' && str[i]<='Z') cnt[str[i]-65]++;
        if (str[i]>='a' && str[i]<='z') cnt[str[i]-97]++;
    }
    int max_index = 0,max=cnt[0];
    for (int j=0; j<26; j++)
    {
        if (max<cnt[j])
        {
            max=cnt[j];
            max_index=j;
        }
    }
    for (int j=0; j<26; j++)
    {
        if (max==cnt[j]) d++;
    }
    if (d==1) printf("%c\n",max_index+65);
    else printf("%c\n",'?');
    return 0;
}
