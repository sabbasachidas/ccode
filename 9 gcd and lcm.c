#include <stdio.h>
void main()
{
    int num, denom, num1, num2, gcd, lcm, remainder;
    printf("Enter two number\n");
    scanf("%d %d", &num1, &num2);
    if ( num1 > num2)
    {
        num= num1;
        denom =num2;
    }
    else{
        num=num2;
        denom = num1;
    }
    remainder= num%denom;
    while(remainder != 0){
        num=denom;
        denom=remainder;
        remainder= num%denom;
    }
    gcd= denom;
    lcm=(num1*num2)/gcd;
    printf("GCD of %d and %d is %d\n",num1,num2,gcd);
    printf("LCM of %d and %d is %d\n", num1,num2,lcm);
    return 0;
}
