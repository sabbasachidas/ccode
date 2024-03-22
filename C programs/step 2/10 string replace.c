#include <stdio.h>>
int main ()
{
    char str[20]= "abcdefgh";
    int count=0;
    while(str[count] != '\0'){
        count++;
    }
    char first= str[0], last = str[count-1];
    str[0]= last;
    str[count-1]= first;
    printf("Replaced string : %s", str);
    return 0;

}
