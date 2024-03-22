#include <stdio.h>
int main()
{
    long add(long a, long b){
    long result = a + b;
    return result;
    }
    long first, second, sum;
    printf("Enter numbers\n");
    scanf("%ld %ld", &first, &second);
    sum = add(first, second);
    printf("Sum is %d\n", sum);

    return 0;
}
