#include <stdio.h>
int main(){
    int n,sum=0,i;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2 == 1){
        sum+=i;
        }
        else{
            sum-=i;
        }
    }
    printf("Sum is %d",sum);
    return 0;
}
