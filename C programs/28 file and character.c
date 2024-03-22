#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char fileName[100];
    char ch;
    int lineCount=0, wordCount=0, charCount=0;
    printf("Enter file name\n");
    gets(fileName);
    fp =fopen(fileName,"r");
    if(fp){
        while((ch=getc(fp))!= EOF){
            if(ch != ' ' && ch!= '\n'){
            charCount++;
            }
            if(ch== ' ' || ch== '\n'){
            wordCount++;
            }
            if(ch== '\n'){
            lineCount++;
            };
            }
            if(charCount >0){
                ++wordCount;
                ++lineCount;
            }
            printf("Character %d, word %d, Line %d",charCount,wordCount,lineCount);
    }

    else{
        printf("Failed to open file");
    }
    return 0;
}
