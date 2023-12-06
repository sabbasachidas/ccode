#include <stdio.h>
#define maxSize 5
void insertion(int arr[]);
int main()
{
    int arr[maxSize];
    printf("Enter %d elements to sort\n",maxSize);
    for(int i=0;i<maxSize;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your data : \n");
    for(int i=0;i<maxSize;i++){
        printf("\t%d",arr[i]);
    }
    insertion(arr);
    return 0;
}
void insertion(int arr[]){
    int i,j,a,key;
    for(i=1;i<maxSize;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){ /*while previous item is greater*/
            arr[j+1] = arr[j];      /*2nd item place = first item*/
            j=j-1;                  /*again check previous item*/
        }
        arr[j+1]=key;           /*assign previous place with next item value*/
        printf("\nitreration %d : ",i);
        for(a=0;a<maxSize;a++){
            printf("\t%d",arr[a]);
        }
    }
    printf("\n\nSorted data :");
    for(i=0;i<maxSize;i++){
        printf("\t%d",arr[i]);
    }
}
