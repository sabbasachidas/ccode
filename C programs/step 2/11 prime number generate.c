#include <stdio.h>

int main() {
    int i, n , flag, j;
    printf("Enter range: \n");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        flag=0;
        for(j=1;j<=i;j++){
            if(i%j  ==0){
                flag++;
            }
        }
        if(flag == 2){
            printf("%d ,",i);
        }
    }
    return 0;
}
