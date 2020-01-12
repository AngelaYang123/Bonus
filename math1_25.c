#include<stdio.h>
int main(){
  int n,i,sum=0;
  while(scanf("%d",&n)==1){
    for(i=1;i<=n;i++)
      if(i%3==0)
        sum+=i;
    printf("%d\n",sum);
    sum=0;
  }
  return 0;
}
