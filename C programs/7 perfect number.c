#include <stdio.h>
int main()
{
    int number, rem,sum=0,i;
    printf("Enter a number to check\n");
    scanf("%d", &number);
    for ( i = 1; i< number ; i++){

        if( number%i == 0){
            sum = sum + i;
        }
    }
    if(sum == number){
        printf("%d is a perfect number\n", number);
    }
    else{
        printf("%d is not a perfect number\n", number);
    }
        return 0;
}
