#include <stdio.h>
int main(){
    int num1,num2,i,j;
    printf("Enter starting and ending range: \n");
    scanf("%d%d",&num1,&num2);
    for(i=num1 ;i<=num2; i++){
        int flag=0;
        for(j=2;j<=i/2; j++){

            if(i%j == 0){
            flag++;

            }
        }
        if(flag == 0 && i!=1){
            printf("%d",i);
            printf("\n");
        }


    }
    return 0;
}
