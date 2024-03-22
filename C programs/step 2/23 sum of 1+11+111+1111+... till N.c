#include <stdio.h>
int main() {
    int n,i;
    long int sum=0,temp=1;
    printf("Enter number of terms...\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%ld", temp);
        if(i< n-1){
            printf("+ ");
        }
        sum+=temp;
        temp=(temp*10)+1;

    }
    printf("\nSum is %ld",sum);
    return 0;
}
