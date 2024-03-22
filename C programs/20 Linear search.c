#include <stdio.h>
int main()
{
    int a[100], i, n, search;
    printf("Enter element number \n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i] == search){
            printf("Element found in location %d\n", i+1);
            break;
        }
    }
    if(i == n){
        printf("Element not found\n");
    }
    return 0;
}
