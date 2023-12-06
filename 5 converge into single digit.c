#include <stdio.h>
int main() {

    int num, sum=0, rem;
    printf("Enter number\n");
    scanf("%d", &num);
    int count =1;
    while (num/10 !=0){
        sum=0;

        while(num != 0){
            rem= num %10 ;
            sum += rem;
            num= num/10;

        }

        printf("Sum is %d (step %d: )\n", sum, count);
        count++;
        num=sum;
    }
    return 0;
}
