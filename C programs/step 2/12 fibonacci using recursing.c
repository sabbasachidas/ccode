#include <stdio.h>
void printFibo(int num){
    static int n1=0,n2=1,n3;
    if(num>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d,  ",n3);
        printFibo(num-1);
    }

}
int main() {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    printFibo(n-2);
    return 0;
}
