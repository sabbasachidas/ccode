#include <stdio.h>
int power (int reme, int digita);
int main()
{
    int n, sum = 0, temp,p, rem, digit=0;
    printf("Enter an integer\n");
    scanf("%d", &n);
    temp = n;

    while(temp != 0){
        digit++;
        temp = temp/10;
    }
    temp =n;
    while(temp !=0){
        rem= temp%10;
        sum = sum + power(rem, digit);
        temp = temp/10;
    }

    if( sum == n){
        printf("%d is an armstrong number\n",n);
    }
    else{
        printf("%d is not an armstrong number\n",n);}
    return 0;
}
int power(int reme, int digita)
    {
        int i, p=1;
        for(i=1; i<=digita;i++){
            p = p* reme;
        }
        return p;
    }
