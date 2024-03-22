#include <stdio.h>
int main() {
    int n;
    printf("Enter number to check\n");
    scanf("%d",&n);
    if((n&1 ==1)){
        printf("Its Odd\n");
    }
    else
        printf("Its Even\n");
    return 0;
}
