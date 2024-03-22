#include <stdio.h>
void main()
{
    int a[100], i, n, search,result;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter elements of array in ascending order\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search\n");
    scanf("%d", &search);
    int mid, high=n-1, low=0;
    while(low<= high){
        mid = low+high/2;
        if( search == a[mid]){
            printf("Element found at position %d", mid+1);
            break;
        }
        else if(search < a[mid]){
            high= mid-1;
        }
        else
            low= mid+1;

        if(low>high){
        printf("Element not found\n");
    }
    }

}
