#include <stdio.h>
void main()
{
    int num, bin_val, dec_val, base=1, rem;
    printf("Enter binary value(0 and 1 only)\n");
    scanf("%d", &num);
    bin_val = num;
    while(num > 0)
    {
        rem = num % 10;
        dec_val += rem*base;
        base = base*2;
        num = num/10;
    }
    printf("The decimal value of binary %d is %d", bin_val, dec_val);
}
