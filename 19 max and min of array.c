#include <stdio.h>
int fmax(int a[], int n);
int fmin(int a[], int n);
int favg(int a[], int n);
int main()
{
    int i, elements[100], size, mini, maxi, avi;
    printf("Enter the array element size\n",size);
    scanf("%d",&size);
    printf("Enter elements one by one\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&elements[i]);
    }
    maxi= fmax(elements,size);
    mini= fmin(elements, size);
    avi= favg(elements, size);

    printf("Max = %d\nMin = %d\nAverage = %d",maxi,mini,avi);

    return 0;
}
int fmax(int a[], int n)
{
    int max = a[0],index=0,i;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int fmin(int a[], int n){
    int i, index=0, min=a[0];
    for(i=1;i<n;i++){
        if(a[i]< min){
            min = a[i];
        }
    }
    return min;
}
int favg(int a[], int n){
    int sum=0,avg=0,i;
    for(i=0;i<n;i++){
        sum += a[i];
    }
    avg = sum/n;
    return avg;
}
