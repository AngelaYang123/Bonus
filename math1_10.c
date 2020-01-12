#include<stdio.h>
int main(){
  float c,f;
  while(scanf("%f",&c)==1){
    f=c*9/5+32;
    f=(int)(f*10+0.5);
    f=(float)f/10;
    printf("%.1f\n",f);
  }
  return 0;
}
