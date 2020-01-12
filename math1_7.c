#include<stdio.h>
int main(){
  int n;
  while(scanf("%d",&n)==1)
    printf("%d %d %d\n",n,n*n,n*n*n);
  return 0;
}
