#include <stdio.h>
int main() {
    char fname[100], wrstr[100];
    FILE *fp;
    printf("Enter file name\n");
    gets(fname);
    printf("Enter string to write\n");
    gets(wrstr);
    fp= fopen(fname,"w+");
    if(fp){
        fputs(wrstr,fp);
    }
    else{
        printf("Failed somewhere...\n");
    }
    fclose(fp);
    return 0;
}
