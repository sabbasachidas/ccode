#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch, fileName[100];
    FILE *fp;
    printf("Enter file name\n");
    gets(fp);
    fp= fopen(fileName, "r");
    if(fp == NULL){
        perror("Error while opening the file\n");
        exit(EXIT_FAILURE);
    }
    printf("The contents of the file are: \n");
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);
    return 0;

}
