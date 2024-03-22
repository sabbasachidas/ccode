#include <stdio.h>
void main()
{
    int num, dec_val, bin_val =0, base=1, rem;
    printf("Enter decimal value\n");
    scanf("%d",&num);
    dec_val=num;
    while(num>0)
    {
        rem= num%2;
        num= num/2;
        bin_val += rem*base;
        base = base*10;
    }
    printf("Binary value is %d\n", bin_val);
}
