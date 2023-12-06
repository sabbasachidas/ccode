#include <stdio.h>
struct student{
    int rollNo;
    char name[20];
    int score;
};
void main()
{
    struct student st[20],temp;
    int i,j,n;
    printf("Enter student number\n");
    scanf("%d",&n);
    printf("Enter roll, name and score\n");
    for(i=0;i<n;i++){
    printf("For student %d\n",i);
    scanf("%d%s%d",&st[i].rollNo,&st[i].name,&st[i].score);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(st[j].score< st[j+1].score){
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }
    printf("Merit list is : \n");
    for(j=0;j<n;j++){
        printf("%d\t%s\t%d\n",st[j].rollNo,st[j].name,st[j].score);
    }
}
