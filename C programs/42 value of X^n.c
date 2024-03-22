#include <stdio.h>
int power(int base, int powerRaised);
int main()
{
    int base, powerRaised, result;
    printf("Enter base value X :\n");
    scanf("%d",&base);
    printf("Enter power value n :\n");
    scanf("%d",&powerRaised);
    result = power(base,powerRaised);
    printf("Result = %d",result);
    return 0;
}
int power(int base, int powerRaised){
    if(powerRaised ==0){
        return 1;
    }
    else
        return (base*power(base,powerRaised-1));
}
