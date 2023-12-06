#include <stdio.h>
int isPrime(int n);
int main() {
    int counter=0 ,i=1,j,n;
    printf("Enter Prime element no. : \n");
    scanf("%d",&n);
    printf("Primes are: 2, 3, ");

        for(j=3;counter<n-2;j++){
            if(isPrime(j)==1){
                printf("%d, ",j);
                counter++;
            }
        }

    return 0;
}
int isPrime(int n){
    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            flag=0;
            break;
        }
        else
            flag=1;
    }

    return flag;
}

