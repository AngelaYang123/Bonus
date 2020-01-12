#include<stdio.h>
int f(int n){
  if(n<=100)
    return f(f(n+11));
  else
    return n-10;
}

int main(){
  int i,k,n;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d",&n);
    printf("%d\n",f(n));
  }
  return 0;
}
