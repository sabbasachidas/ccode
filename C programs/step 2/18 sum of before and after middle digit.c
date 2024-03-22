#include <stdio.h>
int main(){
    int num,i,count=0,temp,middle,sumLeft,sumRight;
    printf("Enter number with middle digit: \n");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        count++;
        temp/10;
    }
    middle=(count/2);
    temp=num;
    for(i=1;i<middle;i++){
        int rem= temp%10;
        sumRight= (sumRight *10)+ rem;
        temp=temp/10;
    }
    temp=temp/10;
    for(i=1;i<middle;i++){
        int rem = temp%10;
        sumLeft= (sumLeft*10) +rem;
        temp=temp/10;
    }
    if(sumLeft == sumRight){
        printf("Not equal\n");
    }
    else{
        printf("Not equal\n");
    }
    return 0;
}
