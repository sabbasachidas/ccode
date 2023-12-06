#include <stdio.h>
int main()
{
    int n,array[100], i, position;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter location you want to delete\n");
    scanf("%d",&position);
    if(position >= n+1){
        printf("Delete not possible");
    }
    else{
        for(i=position-1;i<n-1;i++){
        array[i] = array[i+1];
    }
    printf("New array after deletion\n");
    for(i=0;i<=n-2;i++){
        printf("%d\n",array[i]);
    }
    }

    return 0;
}
