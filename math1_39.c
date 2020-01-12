#include<stdio.h>
int main(){
  int a,b,c,max;
  while(scanf("%d\n",&a)==1 && scanf("%d\n",&b)==1 && scanf("%d",&c)==1){
    if(a>b)
      max=a;
    else
      max=b;
    if(max<c)
      max=c;

    if(max==a){
      if(b+c<=a)
        printf("Not Triangle\n");
      else if(b*b+c*c>a*a)
        printf("Acute Triangle\n");
      else if(b*b+c*c==a*a)
        printf("Right Triangle\n");
      else if(b*b+c*c<a*a)
        printf("Obtuse Triangle\n");
    }
    else if(max==b){
      if(a+c<=b)
        printf("Not Triangle\n");
      else if(a*a+c*c>b*b)
        printf("Acute Triangle\n");
      else if(a*a+c*c==b*b)
        printf("Right Triangle\n");
      else if(a*a+c*c<b*b)
        printf("Obtuse Triangle\n");
    }
    else{
      if(a+b<=c)
        printf("Not Triangle\n");
      else if(a*a+b*b>c*c)
        printf("Acute Triangle\n");
      else if(a*a+b*b==c*c)
        printf("Right Triangle\n");
      else if(a*a+b*b<c*c)
        printf("Obtuse Triangle\n");
    }
  }
  return 0;
}
