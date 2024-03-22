#include <stdio.h>
int main()
{
    int n, r=0;
    printf("Enter number to reverse : \n");
    scanf("%d", &n);
    while(n!= 0){
        r= r*10;
        r= r+ n%10;
        n= n/10;
    }
    printf ("Reversed number : %d", r);
    return 0;
}
