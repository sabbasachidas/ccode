#include <stdio.h>
int main()
{
    int a[100],b[100],sorted[200],m,n,i,j,k,temp;
    printf("Enter number of elements of first array\n");
    scanf("%d",&m);
    printf("Enter elements of first array\n");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number of elements of second array\n");
    scanf("%d",&n);
    printf("Enter elements of second array\n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    k=0;
    for(i=0;i<m;i++){
        sorted[k++] = a[i];
    }
    for(i=0;i<n;i++){
        sorted[k++] = b[i];
    }
    printf("Merged array\n");
    for(i=0;i<m+n;i++){
        printf("%d\n",sorted[i]);
    }
    //sorting//
    for(i=0;i<m+n;i++){
        for(j=i+1;j<m+n;j++){
            if(sorted[i]>sorted[j]){
                temp=sorted[i];
                sorted[i]=sorted[j];
                sorted[j]=temp;
            }
        }
    }
    printf("Sorted array\n");
    for(i=0;i<m+n;i++){
        printf("%d\n",sorted[i]);
    }

    return 0;
}
