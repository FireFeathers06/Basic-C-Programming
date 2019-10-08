#include<stdio.h>
#include<string.h>
char str[1024];
int main(){
    if (fgets(str, 1024, stdin) == NULL || str[0] == '\n') {
        return 1;
    }
    for(int i=0;i<strlen(str)-1;i++){
        printf("%c", str[strlen(str)-2-i]);
    }
}
