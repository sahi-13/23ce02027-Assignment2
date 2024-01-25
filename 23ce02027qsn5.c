#include<stdio.h>
int main (){
    int x;
    printf("Enter a number:");
    scanf("\n%d",&x);
    (x & 1)? (printf("\nThe given number is odd.")):(printf("\nThe given number is even"));
    return 0;
    
}