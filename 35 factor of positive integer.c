#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter a number to check factors\n");
    scanf("%d",&n);
    printf("Factors are : ");
    for(i=1;i<=n;i++){
        if(n%i ==0){
            printf("%d, ",i);
        }
    }
    return 0;
}
