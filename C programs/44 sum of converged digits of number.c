#include <stdio.h>
int main()
{
    int n,sum=0,step=0,rem=0;
    printf("Enter s positive integer\n");
    scanf("%d",&n);
    while(n>9){
        rem=0,sum=0;
        while(n){
            rem=n%10;
            sum+=rem;
            n=n/10;
        }
        step++;
        printf("Step %d: sum %d\n",step,sum);
        n=sum;
    }
    return 0;
}
