#include <stdio.h>

int insertionSort(int array[], int size)
{
    for( int step=1;step<size;step++){
        int key= array[step];
        int j=step-1;

        while(array[j] > key && j>=0){
        array[j+1] = array[j];
        --j;
        }
        array[j+1]=key;
    }
    printf("Sorted array\n");
//    printArray(array,size);
    for( int i=0;i<size;i++){
        printf("%d ",&array[i]);
    }
    return 0;
}
int main()
{
    int array[100],size;
    printf("Enter number of elements\n");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    insertionSort(array,size);

    return 0;
}
