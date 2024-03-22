#include <stdio.h>
int main() {
    int m,n,c,d, matrix[10][10], transpose[10][10];
    printf("Enter row and column number of matrix: \n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of matrix: \n");
    for(c=0;c<m;c++){
        for(d=0;d<n;d++){
            scanf("%d",&matrix[c][d]);
        }
    }

    for(c=0;c<m;c++){
        for(d=0;d<n;d++){
            transpose[d][c] = matrix[c][d];
        }
    }
    printf("Transpose of matrix \n");
    for(c=0;c<m;c++){
        for(d=0;d<n;d++){
            printf("%d\t", transpose[c][d]);
            if(d == n-1){
                printf("\n");
            }
        }

    }
    return 0;
}
