#include <stdio.h>
int main() {
    int row = 5,i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<row-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


