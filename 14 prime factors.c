#include <stdio.h>
void findPrime(int num)
{
    int count;
    printf("\nPrime factors of %d are\n",num);
    for(count=2; num>1; count++)
    {
        while(num%count==0){
            printf("%d ",count);
            num= num/count;
        }
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter a number to check prime factors\n");
    scanf("%d",&num);
    findPrime(num);
    return 0;
}
