#include <stdio.h>
int countBits(int num1, int num2){
    int count = 0, lsb1 = 0, lsb2=0;
    while(( num1>0) || (num2>0)){
        lsb1 = num1 & 1;
        lsb2 = num2 & 1;
        if(lsb1 != lsb2){
            count++;
        }
        num1 = num1 >>1;
        num2 = num2 >>1;
    }
    return count;
}
int main() {
    int num1=0, num2=0;
    printf("Enter num 1 \n");
    scanf("%d", &num1);
    printf("Enter num 2 \n");
    scanf("%d",&num2);
    printf("Number of bits flipped: %d\n", countBits(num1,num2));
    return 0;
}
