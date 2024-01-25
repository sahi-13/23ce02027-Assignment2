#include<stdio.h>

int main(){
    int x, Years,Months,Weeks,Days;
    printf("\nEnter total numer of days:");
    scanf("%d",&x);
    Years= x/365;
    Months= (x%365)/30;
    Weeks= ((x%365)-(Months*30))/7;
    Days= ((x%365)-(Months*30)-(Weeks*7));
    printf("\nYears=%d\nMonths=%d\nWeeks=%d\nDays=%d",Years,Months,Weeks,Days);
    return 0;


}