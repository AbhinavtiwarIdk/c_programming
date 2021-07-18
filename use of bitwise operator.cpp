#include<stdio.h>
int main()
{
    int a,b;
    printf("my name is  jay khandelwal\n");
    printf("Using of BITWISE operator. \n");
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    //Using BITWISE operator
    a&b; //using bitwise AND
    printf("\nThe value of a AND b is %d",a&b);
    a|b; // using bitwise OR
    printf("\nThe value of a OR b is %d",a|b);
    a^b; //using bitwise XOR
    printf("\nThe value of a XOR b is %d",a^b);
    return 0;
}
