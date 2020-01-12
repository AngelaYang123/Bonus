#include<stdio.h>
int main(){
  int n,m,i,count;
  int a[2],b[7];
  while(scanf("%d\n",&n)==1 && scanf("%d",&m)==1){
    count=0;
    for(i=1;i>=0;i--){
      a[i]=n%10;
      n/=10;
    }
    for(i=6;i>=0;i--){
      b[i]=m%10;
      m/=10;
    }
    for(i=0;i<6;i++)
      if(a[0]==b[i])
        if(a[1]==b[i+1])
           count++;
    printf("%d\n",count);
  }
  return 0;
}
