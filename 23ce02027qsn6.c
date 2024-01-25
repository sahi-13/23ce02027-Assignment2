#include<stdio.h>
int main(){
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    (x%2!=0 && x>=100 && x<=200)? printf("\nTrue"):printf("\nFalse");
    return 0;
}