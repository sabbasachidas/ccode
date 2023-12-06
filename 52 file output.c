#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i,n;
    scanf("%d",&n);
    freopen("output.txt","w",stdout);
    for(i=0;i<=n;i++){
        printf("%d",i);
    }
    return 0;
}
