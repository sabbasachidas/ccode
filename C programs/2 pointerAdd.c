#include <stdio.h>
int main()
{
    long add(long *x, long *y)
    {
        long sum = *x + *y;
        return sum;
    }
    long a,b, *p, *q, sum;
    printf("Enter numbers\n");
    scanf("%ld %ld", &a, &b);

    sum = add(&a, &b);
    printf("Sum is %ld ", sum);
    return 0;
}
