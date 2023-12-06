#include <stdio.h>
//int main() {
//    printf("Enter value: \n");
//    int n,i,j;
//    scanf("%d", &n);
//    int m=n;
//    for(i=1;i<=n;i++){
//        for(j=1;j<=i;j++){
//            printf("%d",i);
//        }
//        printf("\n");
//    }
//    return 0;
//}
int main() {
    printf("Enter value: \n");
    int n,i,j;
    scanf("%d", &n);
    int m=n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
