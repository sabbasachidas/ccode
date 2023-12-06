#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,line;
    printf("Enter x co-ordinate of first point\n");
    scanf("%f",&x1);

    printf("Enter y co-ordinate of first point\n");
    scanf("%f",&y1);

    printf("Enter x co-ordinate of second point\n");
    scanf("%f",&x2);

    printf("Enter x co-ordinate of second point\n");
    scanf("%f",&y2);
    line=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Length of the line %.2f\n",line);
    return 0;
}
