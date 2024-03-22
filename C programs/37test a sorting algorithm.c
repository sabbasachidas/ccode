#include <stdio.h>
int sort(int array[], int n);
int main()
{
    int n,i, array[500];
    printf("Enter number of elements of array\n");
    scanf("%d",&n);
    printf("Enter elements :\n");
    int status = sort(array,n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    if(status==0){
        printf("Array is sorted\n");
    }
    else if(status == 1){
        printf("Array is not sorted\n");
    }
    return 0;
}
int sort(int array[], int n){
    int i;
    if(n==0 || n==1){
        return 0;
    }
    for(i=0;i<=n;i++){
        if(array[i]> array[i+1]){
            return 1;
        }
        else
            return 0;
    }
}
