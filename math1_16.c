#include<stdio.h>
#include<math.h>
int main(){
 double x,y;
 while(scanf("%lf\n",&x)==1 && scanf("%lf",&y)==1){
   if(pow(x,2)+pow(y,2)<=10000)
     printf("inside\n");
   else
     printf("outside\n");
 }
 return 0;
}
