#include <stdio.h>
int main(){
    char str[]={"ALL CAPS LETTER"}, ch;
    int i=0,count=0;
    while(str[i] !='\0')
        {
            count++;
            i++;
        }
    for(i=0;i<count;i++){
        if(str[i] == ' '){
            for(int j=i;j<count;j++){
                str[j] = str[j+1];
            }
        }
    }



        int flag=0;
        i=0;
        while(str[i] != '\0'){
            if(flag %2 == 0){
                    ch=str[i];
                if(ch>= 'a' && ch<= 'z'){
                    str[i]= str[i]-32;

                }

            }
            else if(flag %2 == 1){
                ch= str[i];
                if(ch>= 'A' && ch<='Z'){
                    str[i] = str[i]+32;

                }
            }
            i++;
            flag++;
        }
        printf("Camel case: %s\n",str);
        return 0;

}

