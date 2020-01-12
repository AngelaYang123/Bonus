#include<stdio.h>
int main(){
  int i,j,ans=1;
  while(scanf("%d",&i)==1){
   if(i>=31)
     printf("Value of more than 31\n");
   else{
     for(j=0;j<i;j++)
       ans*=2;
     printf("%d\n",ans);
   }
   ans=1;
  }
  return 0;
}
