#include<stdio.h>
int main(){
  long long int n,i;
  while(scanf("%lld",&n)==1){
    for(i=2;i<n;i++){
      if(n%i==0){
        printf("NO\n");
        break;
      }
    }
    if(i==n)
      printf("YES\n");
  }
  return 0;
}
