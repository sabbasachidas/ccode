#include <stdio.h>
int main() {
    int num,sum=0,rem;
    printf("Enter number \n");
    scanf("%d", &num);
    while(num/10 != 0){
        sum=0;
        while(num != 0){
            rem=num%10;
            sum+= rem;
            num=num/10;
        }
        printf("Sum is %d \n",sum);
        num=sum;
    }
    return 0;
}
