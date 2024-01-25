#include<stdio.h>
int main(){
 int mp;
 int tip;
 int Tip;
 int tax;
 int Tax; 
 int mtc;
 printf("\n Meal cost=");
 scanf("%d",&mp);
 printf("\nPercentage tip=");
 scanf("%d",&tip);
 Tip=(tip*mp)/100;
 printf("\nTax percentage=");
 scanf("%d",&tax);
 Tax=(tax*mp)/100;
 mtc=mp+Tip+Tax;
 printf("\n Total cost of the meal=%d",mtc);
 return 0;


}