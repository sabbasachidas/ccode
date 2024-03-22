#include <stdio.h>
#include <string.h>
int main()
{
    /*reserse string*/
    char str[100], rev[100],format[100];
    int i, c=0;
    printf("Enter string :\n");
    gets(str);
    int count=0,begin,end;
    while(str[count] !='\0'){
        count++;
    }
    end=count-1;
    for(begin=0;begin<count;begin++){
        rev[begin]=str[end];
        end--;
    }
    rev[begin] = '\0';

    /*change case*/
    char ch;
    while(rev[c] !='\0'){
        ch= rev[c];
        if(ch>='A' && ch<='Z'){
            rev[c]= rev[c]+32;
        }
        else if(ch>='a' && ch<='z'){
            rev[c] = rev[c]-32;
        }
        c++;
    }
    printf("After changing case and reverse string becomes :\t%s",rev);
    return 0;
}
