#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define delim "."
/* return 1 if string contain only digits, else return 0 */
int valid_digit(char *ip_str)
{
    while(*ip_str){
        if(ip_str >=0 && *ip_str <=9){
            ++ip_str;
        }
        else
            return 0;
    }
    return 1;
}
/* return 1 if IP string is valid, else return 0 */
int is_valid_ip(char *ip_str)
{
    int i,num,dots=0;
    char *ptr;
    if(ip_str == NULL){
        return 0;
    }
    ptr=strtok(ip_str, delim);
    if(ptr == NULL){
        return 0;
    }
    while(ptr){
             /* after parsing string, it must contain only digits */
        if(!valid_digit(ptr)){
            return 0;

        }
    num= atoi(ptr);
    /* check for valid IP */
    if(num >= 0 && num<= 255){
        /* parse remaining string */
        ptr= strtok(NULL, delim);
        if(ptr != NULL){
            ++dots;
        }
        else
            return 0;
    }
    }
    if(dots !=3)
    {
        return 0;
    }
    return 1;
}
// Driver program to test above functions
int main(){
    char ip[100];
    printf("Enter ipv4 ip address\n");
    scanf("%c",&ip);
    if(is_valid_ip(ip) == 1){
        printf("Valid ip\n");
    }
    else
        printf("Invalid ip\n");
    return 0;
}
