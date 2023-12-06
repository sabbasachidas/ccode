#include <stdio.h>
int main()
{
    int n;
    printf("Enter value to check\n");
    scanf("%d", &n);
    n%2 == 0 ? printf("Even\n") : printf("Odd");
    return 0;
}
