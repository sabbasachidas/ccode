#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer\n");
    scanf("%d %d",&a,&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping \na= %d\nb= %d",a,b);
    return 0;
}
