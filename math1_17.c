#include<stdio.h>
int main(){
  int a,b,temp;
  scanf("%d %d",&a,&b);
  while(a%b!=0){
    temp=b;
    b=a%b;
    a=temp;
  }
  printf("%d\n",b);
  return 0;
}
