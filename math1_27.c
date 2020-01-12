#include<stdio.h>
int main(){
  int a,b,i,sum=0;
  while(scanf("%d\n",&a)==1 && scanf("%d",&b)==1){
    if(a<b)
      for(i=a;i<=b;i++)
        sum+=i;
    else
      for(i=b;i<=a;i++)
        sum+=i;
    printf("%d\n",sum);
    sum=0;
  }
  return 0;
}
