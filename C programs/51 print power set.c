#include <stdio.h>
int main()
{
    int i,j,n;
    puts("Enter number of array elements");
    scanf("%d",&n);
    int arr[n];
    puts("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Output = {");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            printf("(%d,%d)",arr[i],arr[j]);
            if(i<n-2){
                printf(",");
            }
        }
    }
    printf("}");
    return 0;
}
