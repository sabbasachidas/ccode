#include <stdio.h>
void reverse(){
    char c;
    scanf("%c",&c);
    if( c != '\n'){
        reverse();
        printf("%c",c);
    }
}
int main() {
    printf("Enter string: \n");
    reverse();
    return 0;
}
