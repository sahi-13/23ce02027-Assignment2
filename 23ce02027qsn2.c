#include<stdio.h>
int main(){
    int a,b,c,x;
    printf("\nEnter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    x=(a>b)? ((a>c) ? a:c):((b>c) ? b:c);
    printf("\nMaximum number is:%d",x);
    return 0;
}