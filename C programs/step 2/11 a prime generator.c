#include <stdio.h>
int chechPrime(int num){
    int flag =0;
    int x= num/2;
    if(num<1){
        flag= 0;
    }
    else{

        for(int i=2;i<=x;i++){
            if(num%i == 0);{
                flag= 0;
                break;
            }
            else {
                flag =1;
            }
        }
    }
    return flag;
}
int main () {
    int a=1,b=100;
////    printf("enter limit: \n");
////    scanf("%d",&b);
    for(int i=1;i<=b;i++){
            int check = chechPrime(i);
        if(check == 1){
            printf("%d \n",i);
        }
    }


    return 0;
}
