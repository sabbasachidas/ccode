#include <stdio.h>
int main()
{
    int n,i,arr[200];
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter target value\n");
    int target;
    scanf("%d",&target);
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                printf("Pair found (%d and %d)",arr[i],arr[j]);
                return;
            }
        }
    }
    printf("Not found\n");
    return 0;
}
