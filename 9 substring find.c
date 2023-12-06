#include <stdio.h>
#include <string.h>
int main() {
    char mainstr[50]= "x^x";
    char substr[20] = "x";

    char *foundstr = strstr(mainstr, substr);
    if( foundstr == NULL){
        printf("Substring not found\n");
    }
    else{
        printf("Substring located -> %s", foundstr);
    }
    return 0;
}
