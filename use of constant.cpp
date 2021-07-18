#include <stdio.h>
int main() 
{
   const int MonthsinYear=12;
   int Monthsintenyear=12*10;
  
   int MoneyGeneratedPerMonth;
   MoneyGeneratedPerMonth=500;
    
    printf("Hello, This code is designed by Manish Mathuria \n");
    printf("The approximate yearly income will be: %d \n", MoneyGeneratedPerMonth * MonthsinYear);
    
    MoneyGeneratedPerMonth=600;
    printf("The approximate yearly income will be: %d \n", MoneyGeneratedPerMonth * MonthsinYear);
    
    MoneyGeneratedPerMonth=700;
    printf("The approximate yearly income will be: %d \n", MoneyGeneratedPerMonth * MonthsinYear);
    
    MoneyGeneratedPerMonth=1000;
    printf("The approximate ten year income will be: %d \n", MoneyGeneratedPerMonth * Monthsintenyear);
    
    
        return 0;
}
