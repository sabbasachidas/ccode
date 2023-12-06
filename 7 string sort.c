#include <stdio.h>
int main() {
    char string[100], temp;
    int i,j, count=0;
    printf("Enter string: \n");
    gets(string);
    while(string[i] != '\0'){
        count++;
        i++;
    }
    for(i=0;i<count-1;i++){
        for(j=i+1;j<count;j++){
            if(string[i]>string[j]){
                temp= string[i];
                string[i]=string[j];
                string[j]=temp;
            }
        }
    }
    printf("After sorting string is %s",string);
    return 0;
}
