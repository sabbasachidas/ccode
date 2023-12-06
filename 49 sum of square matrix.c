#include <stdio.h>
int main()
{
    int a[50][50],i,j,sum=0,n;
    printf("Enter size of square matrix\n");
    scanf("%d",&n);
    printf("Enter %dX%d matrix elements\n",n,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,sum);
        sum=0;
    }
    return 0;
}
