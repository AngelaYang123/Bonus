#include<stdio.h>
int main(){
  int n;
  while(scanf("%d",&n)==1){
    if(n<=800)
      printf("%.1f\n",n*0.9);
    else if(n>800 && n<1500)
      printf("%.1f\n",n*0.9*0.9);
    else
      printf("%.1f\n",n*0.9*0.79);
  }
  return 0;
}
