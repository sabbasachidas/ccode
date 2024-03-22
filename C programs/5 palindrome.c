#include <stdio.h>
int main()
{
    int n, remainder, sum=0,temp;
    printf("Enter number to check\n");
    scanf("%d", &n);
    temp = n;
    while(n>0)
    {
        remainder = n% 10;
        sum = (sum * 10) + remainder;
        n = n / 10;
    }
    if(temp == sum){
        printf("%d is a palindrome number\n", temp);
    }
    else{
        printf("%d is not a palindrome number\n", temp);
    }
}
