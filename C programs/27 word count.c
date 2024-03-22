#include <stdio.h>
int main()
{
    int i,n,count =1;
    char s[1000];
    printf("Enter string\n");
    gets(s);
    n=strlen(s);
    for(i=0;i<+n;i++){
        if(s[i] == ' ' || s[i] == '\n'){
            count++;
        }
    }
    printf("Number of words %d",count);
    return 0;
}
