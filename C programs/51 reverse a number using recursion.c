#include <stdio.h>
int sum=0,rem;
int reverse(int num){
    if(num){
        rem=num % 10;
        sum=sum*10+rem;
        reverse(num/10);
    }
    else{
        return sum;
    }
    return sum;
}

int main()
{
    int num,rev;
    puts("Enter number:");
    scanf("%d",&num);
    rev = reverse(num);
    printf("Reverse of the number %d",rev);
    return 0;
}
