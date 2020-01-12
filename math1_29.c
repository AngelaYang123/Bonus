#include<stdio.h>
int main(){
  int n,i,j;
  while(scanf("%d",&n)==1){
   for(i=n-1;i>1;i--){
     for(j=2;j<i;j++)
       if(i%j==0)
          break;
     if(j==i){
       printf("%d\n",i);
       break;
     }
    }
   }
   return 0;
}
