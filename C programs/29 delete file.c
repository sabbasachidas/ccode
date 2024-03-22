#include <stdio.h>
int main() {
    int status;
    char fname[100];
    printf("Enter filename\n");
    gets(fname);
    status= remove(fname);
    if(status ==0 ){
        printf("File deleted successfully\n");
    }
    else{
        printf("Unable to delete\n");
        perror("Following error occured");
    }
    return 0;
}
