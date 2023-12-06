#include <stdio.h>
int main() {
    int num,sum,rem;
    printf("Enter number: \n");
    scanf("%d", &num);
    int  count=1;
    while( num/10 != 0){
        sum=0;
        while(num != 0){
            rem = num % 10;
            sum += rem;
            num/10;
        }

        printf("Step %d: sum is %d \n",count,sum);
        count++;
        num=sum;
    }

    return 0;
}
