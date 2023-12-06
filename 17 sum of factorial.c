#include <stdio.h>
long factorial(int n)
{
    if(n==0){
        return 1;
    }
        else{
            return (n* factorial(n-1));
    }
}
void main()
{
    int i,n;
    float sum;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    sum =0.0;
    for(i=1;i<n;i++)
    {
        sum = sum+ ((float)i/(float)factorial(i));
    }
    printf("Sum = %f\n",sum);
}
