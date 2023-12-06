#include <stdio.h>
int main()
{
    int i,j,k=1,r;
    printf("Enter the range\n");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++,k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
