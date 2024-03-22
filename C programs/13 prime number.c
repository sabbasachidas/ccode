#include <stdio.h>

int main()
{
    int num, flag,i, result,m;
    printf("Enter number\n");
    scanf("%d",&num);
    m = num/2;
    if(num<=1){
    flag = 0;

    }
    else
    {
        for(i=2; i<m; i++){
            if(num%i == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
    }
    if(flag==0){
        printf("Given number is not prime\n");
    }
    else
        printf("Given number is a prime\n");
    return 0;
}

