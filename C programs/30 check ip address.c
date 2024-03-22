#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ip[100];
    printf("Enter ip address to check\n");
    scanf("%s",&ip);
    int a=0,b=0,c=0,d=0;
    int con= sscanf(ip,"%d.%d.%d.%d",&a,&b,&c,&d);
    if(con == 4){
        if((a>=0 && a<=255) && (b>=0 && b<=255) && (c>=0 && c<=255) && (d>=0 &&c<=255)){
            printf("%s is a valid ip address\n",ip);
        }
        else
            printf("%s is not a valid ip address\n",ip);
    }
    else
        printf("malformed ip\n");


    return 0;
}
