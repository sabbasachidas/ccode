#include <stdio.h>
int main()
{
    int num,a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    /* Calculating xor of a and b */
    num = a^b;
    int countFlipBit=0;
    while(num!=0){
        num = num & (num-1);
        countFlipBit++;
    }
    printf("%d bits needed to be flipped\n",countFlipBit);
    return 0;
}
