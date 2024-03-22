#include <stdio.h>
int main() {
    int i,no=1,range,sum=0;
    printf("Enter value of n \n");
    scanf("%d",&range);
    for(i=1;i<=range;i+=no,no++){
        printf("\t%d",i);
        sum+=i;
    }
    printf("\nsum is = %d",sum);
    return 0;
}
