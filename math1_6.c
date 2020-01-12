#include<stdio.h>
int main(){
  int mile;
  float km;
  while(scanf("%d",&mile)==1){
    km=mile*1.6;
    km=(int)(km*10+0.5);
    km=(float)km/10;
    printf("%.1f\n",km);
  }
  return 0;
}
