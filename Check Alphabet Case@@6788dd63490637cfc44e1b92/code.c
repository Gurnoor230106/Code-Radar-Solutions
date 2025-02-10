#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
 char a;
    scanf("%c",&a);
    if(a<=122 &&a>=97){
        printf("Lowercase");
    }
    else if(a>=65 && a<=90) {
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}