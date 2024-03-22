#include <stdio.h>
#include <string.h>
int main()
{
    char string[100][100],temp[100];
    int i,j,n;
    puts("Enter number of strings :");
    scanf("%d",&n);
    puts("Enter strings :");
    for(i=0;i<n;i++){
        scanf("%s",&string[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(string[i],string[j]) >0){
                strcpy(temp,string[i]);
                strcpy(string[i],string[j]);
                strcpy(string[j],temp);
            }
        }
    }
    puts("The sorted order of strings are :");
    for(i=0;i<n;i++){
        printf("%s\n",string[i]);
    }
    return 0;
}
