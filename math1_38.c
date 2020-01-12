#include<stdio.h>
int main(){
  int a,b,c;
  int max,d;
  while(scanf("%d\n",&a)==1 && scanf("%d",&b)==1 && scanf("%d",&c)==1){
    if(a>b)
        max=a;
    else
        max=b;
    if(c>max)
        max=c;

    if(max==a)
      d=b+c;
    else if(max==b)
      d=a+c;
    else
      d=a+b;

    if(d>max)
      printf("fit\n");
    else
      printf("unfit\n");
  }
  return 0;
}
