// Your code here...
#include <stdio.h>
 int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
 }