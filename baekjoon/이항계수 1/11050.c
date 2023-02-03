#include <stdio.h>

int factorial(int n){
    if(n==0 || n==1) return 1;
    else return n*factorial(n-1);
}

int main() {
    int k,n;
    scanf("%d %d",&n,&k);
    printf("%d\n",factorial(n)/(factorial(k)*factorial(n-k)));
}

