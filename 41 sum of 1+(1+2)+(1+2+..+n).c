#include <stdio.h>
int main()
{
    int n, sum, finalSum=0,i,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=i;j++){
            sum+=j;
        }
        finalSum+=sum;
    }
    printf("Sum is %d",finalSum);
    return 0;
}
