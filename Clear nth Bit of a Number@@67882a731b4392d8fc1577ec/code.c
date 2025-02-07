#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  int a,b,result;
  scanf("%d %d",&a,&b);
   int r=~(1<<b);
    result=r&a;
    printf("%d",result);
}