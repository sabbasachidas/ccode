#include <stdio.h>
int findAnagram(char array1[], char array2[]);
int main() {
    char array1[100], array2[100];
    int flag;
    printf("Enter 1st string\n");
    gets(array1);
    printf("Enter string 2\n");
    gets(array2);
    flag= findAnagram(array1, array2);
    if(flag ==1){
        printf("%s and %s are anagram\n",array1, array2);
    }
    else {
        printf("%s and %s are not anagram\n",array1,array2);
    }
    return 0;
}
int findAnagram(char array1[], char array2[]){
    int num1[26]={0}, num2[26]={0}, i=0;
    while(array1[i]!= '\0'){
        num1[array1[i] - 'a']++;
        i++;
    }
    i=0;
    while(array2[i] != '\0'){
        num2[array2[i] -'a']++;
        i++;
    }
    for(i=0;i<26;i++){
        if(num1[i] != num2[i]){
            return 0;
        }
    }
    return 1;
}
