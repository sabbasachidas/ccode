#include <stdio.h>
//anagram check
int main(){
    char a[50],b[50],ch;
    int i=0,j=0,num1[26]={0},num2[26]={0};
    printf("Enter 1st string\n");
    gets(a);
    printf("Enter 2nd\n");
    gets(b);
    while(a[i]!='\0'){
        num1[a[i]-'a']++;
        i++;
    }
    while(b[j]!='\0'){
        num2[b[j]-'a']++;
        j++;
    }
    for(i=0;i<26;i++){
        if(num1[i] != num2[i]){
            printf("Not anagram\n");
            break;
        }
        else{
            printf("Anagram found\n");
        }
    }

}

