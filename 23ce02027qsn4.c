#include<stdio.h>
int main(){
    int y;
    int z;
    printf("\nEnter the year:");
    scanf("%d",&y);
    z= y%4;
    (z==0)? (printf("\nGiven year is a leap year.")):(printf("\nGiven year is not a leap year.")) ;
    return 0;

}