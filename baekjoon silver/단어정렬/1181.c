#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char str[51];
    int len;
}Str;

int main() {
    int n;
    char temp[51];
    Str ch[20000];
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%s", ch[i].str);
        ch[i].len=strlen(ch[i].str);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - 1) - i; j++) {
            if (ch[j].len > ch[j+1].len) {
                temp = ch[j].str;
                ch[j].str = ch[j+1].str;
                ch[j+1].str = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%s",ch[i].str);
    }
    return 0;
}
