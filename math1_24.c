#include<stdio.h>
int main(){
 int a,b;
 while(scanf("%d\n",&a)==1 && scanf("%d",&b)==1){
   if(a<=60)
     printf("%.1f\n",a*b);
   else if(a>60 && a<=120)
     printf("%.1f\n",b*60+b*1.33*(a-60));
   else
     printf("%.1f\n",b*60+b*1.33*60+b*1.66*(a-120));
 }
 return 0;
}
