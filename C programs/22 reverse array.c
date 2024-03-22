#include <stdio.h>
int main()
{
    int n,i,j,a[100],b[100];
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=n-1;i>=0;i--){
        b[j++] = a[i];
    }
    printf("Reverse array is\n");
    for(i=0;i<n;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}
