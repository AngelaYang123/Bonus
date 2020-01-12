#include<stdio.h>
#include<string.h>
int main(){
  char c[50];
  int len,i,j;
  scanf("%s",c);
  len=strlen(c)-1;
  for(i=0,j=len;i<len/2,j>=0;i++,j--)
    if(c[i]!=c[j]){
      printf("NO\n");
      return 0;
    }
  printf("YES\n");
  return 0;
}
