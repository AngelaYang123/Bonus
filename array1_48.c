#include<stdio.h>
int main(){
  int i,n,a[4],temp;
  scanf("%d",&n);

  a[0]=n/1000;
  a[1]=(n%1000)/100;
  a[2]=(n%1000%100)/10;
  a[3]=n%1000%100%10;

  a[0]=(a[0]+7)%10;
  a[1]=(a[1]+7)%10;
  a[2]=(a[2]+7)%10;
  a[3]=(a[3]+7)%10;

  temp=a[0];
  a[0]=a[2];
  a[2]=temp;

  temp=a[1];
  a[1]=a[3];
  a[3]=temp;

  for(i=0;i<4;i++)
    printf("%d",a[i]);
  printf("\n");
  return 0;
}
