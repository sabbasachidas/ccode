#include <stdio.h>
int main()
{
    int array[]={2,6,10,33,46,48,84,97,46,92,101},i,size,high1=0,high2=0,low1=0,low2=0;
    size= sizeof(array)/sizeof(array[0]);
    for(i=0;i<=size;i++){
        if(array[i]>array[i+1]){
           high2 = high1;
           high1= array[i];
           }
        if(array[i]> high2 && array[i]<high1){
            high2=array[i];
        }
        if(array[i]<array[i+1]){
            low2 = low1;
            low1 = array[i];
        }
        if(array[i]>low1 && array[i]<low2){
            low2 = array[i];
        }
    }
    printf("Second highest is %d and second lowest is %d\n", high2,low2);
    return 0;
}
