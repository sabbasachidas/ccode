#include <stdio.h>
int main()
{
    int i, num,count,primeCounter=0;
    printf("First 100 prime numbers are : \n");
    for(num=2; primeCounter<100;num++){
        count=0;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                count++;
            }
        }
        if(count==0){
            printf(" %d " ,num);
            primeCounter++;
        }
    }
    return 0;
}

