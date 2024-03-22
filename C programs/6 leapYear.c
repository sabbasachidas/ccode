#include <stdio.h>
int main()
{
    int year;
    printf("Enter year to check\n");
    scanf("%d", &year);
    if( year%400 == 0){
        printf("Year %d is a leap year\n", year);
    }
    else if(year % 100 ==0){
        printf("Year %d is not a leap year\n", year);
    }
    else if(year%4 ==0){
        printf("Year %d is a leap year", year);
    }
    else
        printf("Year %d is not a leap year", year);

}
