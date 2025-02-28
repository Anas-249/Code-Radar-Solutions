#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100],result[100];
    scanf("%s %s",&a,&b);
    strcpy(result,a);
    strcat(result," and ");
    strcat(result,b);
    printf("You entered: %s\n and",result);
    return 0;
}