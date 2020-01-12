#include<stdio.h>
int main(){
  int price;
  int ten,five,one;
  scanf("%d",&price);
  ten=price/10;
  five=(price%10)/5;
  one=(price%10)%5;
  printf("NT10=%d\n",ten);
  printf("NT5=%d\n",five);
  printf("NT1=%d\n",one);
  return 0;
}
