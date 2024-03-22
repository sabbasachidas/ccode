#include <stdio.h>
int main()
{
    int n,array[100], i, value, position;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter location you want to insert\n");
    scanf("%d",&position);
    printf("Enter value you want to insert\n");
    scanf("%d",&value);
    for(i=n-1;i>=position-1;i--){
        array[i+1] = array[i];
    }
    array[position-1] = value;
    printf("New array after addition\n");
    for(i=0;i<=n;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}
