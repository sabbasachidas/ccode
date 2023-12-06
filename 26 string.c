#include <stdio.h>
//#include <string.h>
int main()
{
//    char arrar[100];
//    printf("Enter string\n");
//    scanf("%s", &arrar);
//    printf("%s",arrar);

//    char a[80];
//    gets(a);
//    printf("%s",a);

//        char s[100];
//        int i=0;
//        gets(s);
//        while(s[i] != '\0'){
//            printf("%c", s[i]);
//            i++;
//        }

//        char s[100];
//        int n,i;
//        gets(s);
//        n= strlen(s);
//        for(i=n-1;i>=0;i--){
//            putchar(s[i]);
//        }

        char s[100], r[100];
        int begin,end,count =0;
        printf("Enter string\n");
        gets(s);
        while(s[count] != '\0'){
            count++;
        }
        end=count-1;
        for(begin=0;begin<count;begin++){
            r[begin] = s[end];
            end--;
        }
        r[begin] = '\0';
        printf("%s\n",r);


    return 0;
}
