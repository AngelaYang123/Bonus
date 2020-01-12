#include<stdio.h>
int main(){
  int a,b;
  while(scanf("%d\n",&a)==1 && scanf("%d",&b)==1)
    printf("%d\n",(a+b)*(a+b));
  return 0;
}
