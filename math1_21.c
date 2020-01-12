#include<stdio.h>
long long int fac(long long int n){
  if(n<=1)
    return 1;
  else
    return n*fac(n-1);
}

int main(){
  long long int n;
  while(scanf("%lld",&n)==1){
    n=fac(n);
    printf("%lld\n",n);
  }
  return 0;
}
