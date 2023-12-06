#include <stdio.h>
int main()
{
    float hw, to, oo;
    printf("Enter hourly wage\n");
    scanf("%f",&hw);
    printf("Enter total regular hour\n");
    scanf("%f",&to);
    printf("Enter total overtime\n");
    scanf("%f",&oo);
    float totalOverPay= hw*oo*1.5;
    float weeklyPay= totalOverPay + (hw*to);
    printf("Total payment = %.2f",weeklyPay);
    return 0;
}
