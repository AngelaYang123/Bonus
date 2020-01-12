#include<stdio.h>
int main(){
  float n,area;
  while(scanf("%f",&n)==1){
    area=n*n;
    area=(int)(area*10+0.5);
    area=(float)area/10;
    printf("%.1f\n",area);
  }
  return 0;
}
