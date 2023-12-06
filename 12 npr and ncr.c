#include <stdio.h>
long factorial(int n);
long find_ncr(int n, int r);
long find_npr(int n, int r);
int main()
{
    int n,r;
    long npr, ncr;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter the value of r \n");
    scanf("%d", &r);
    ncr= find_ncr(n,r);
    npr= find_npr(n,r);
    printf("NPR= %ld \n NCR= %ld\n", npr,ncr);
}
long factorial(int n)
{
    if(n<=0){
        return 1;
    }
    else
        return n* factorial(n-1);
}
long find_ncr(int n, int r)
{
    long result;
    result= factorial(n) / (factorial(r) * factorial(n-r));
    return result;
}
long find_npr(int n, int r)
{
    long result;
    result = factorial(n) / factorial(n-r);
    return result;
}
