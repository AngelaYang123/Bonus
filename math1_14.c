#include<stdio.h>
int main(){
  int time;
  scanf("%d",&time);
  printf("%d days\n",time/86400);
  printf("%d hours\n",(time%86400)/3600);
  printf("%d minutes\n",(time%86400%3600)/60);
  printf("%d seconds\n",time%86400%3600%60);
  return 0;
}
