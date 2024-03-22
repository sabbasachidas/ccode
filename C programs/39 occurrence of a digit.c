#include <stdio.h>
int main()
{
    int rem,count=0,digit;
    long num;
    printf("Enter number\n");
    scanf("%d",&num);
    printf("Enter digit to find\n");
    scanf("%d",&digit);
    while(num !=0){
        rem=num%10;
        if(rem==digit){
            count++;
        }
        num=num/10;
    }
    printf("%d is occurred %d times\n ",digit,count);
    return 0;
}
