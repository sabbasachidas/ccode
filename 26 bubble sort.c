#include <stdio.h>
int main() {
    int n, i, j, temp, arr[100];
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr [j+1]){
                temp= arr[j+1];
                arr[j+1]= arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted list:\n");
    for(i=0;i<n;i++){
        printf("%d\t");
    }


    return 0;
}
