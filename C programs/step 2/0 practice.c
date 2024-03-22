#include <stdio.h>
//pattern inverted full
int main(){
    int n,i,j,k;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<2*i;j++){
            printf(" ");
        }
        for(k=0;k<2*(n-i)-1;k++){
            printf("* ");
        }
        printf("\n");
    }


}


